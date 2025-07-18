/-
Copyright (c) 2024 Amazon.com, Inc. or its affiliates. All Rights Reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import Lean.Meta.Tactic.Grind.Attr
import Lean.Meta.Tactic.Grind.RevertAll
import Lean.Meta.Tactic.Grind.Types
import Lean.Meta.Tactic.Grind.Util
import Lean.Meta.Tactic.Grind.Cases
import Lean.Meta.Tactic.Grind.Injection
import Lean.Meta.Tactic.Grind.Core
import Lean.Meta.Tactic.Grind.Canon
import Lean.Meta.Tactic.Grind.MarkNestedSubsingletons
import Lean.Meta.Tactic.Grind.Inv
import Lean.Meta.Tactic.Grind.Proof
import Lean.Meta.Tactic.Grind.Propagate
import Lean.Meta.Tactic.Grind.PP
import Lean.Meta.Tactic.Grind.Simp
import Lean.Meta.Tactic.Grind.Ctor
import Lean.Meta.Tactic.Grind.Parser
import Lean.Meta.Tactic.Grind.EMatchTheorem
import Lean.Meta.Tactic.Grind.EMatch
import Lean.Meta.Tactic.Grind.Main
import Lean.Meta.Tactic.Grind.CasesMatch
import Lean.Meta.Tactic.Grind.Arith
import Lean.Meta.Tactic.Grind.Ext
import Lean.Meta.Tactic.Grind.MatchCond
import Lean.Meta.Tactic.Grind.MatchDiscrOnly
import Lean.Meta.Tactic.Grind.Diseq
import Lean.Meta.Tactic.Grind.MBTC
import Lean.Meta.Tactic.Grind.Lookahead
import Lean.Meta.Tactic.Grind.LawfulEqCmp
import Lean.Meta.Tactic.Grind.ReflCmp
import Lean.Meta.Tactic.Grind.SynthInstance

namespace Lean

/-! Trace options for `grind` users -/
builtin_initialize registerTraceClass `grind
builtin_initialize registerTraceClass `grind.trace
builtin_initialize registerTraceClass `grind.assert
builtin_initialize registerTraceClass `grind.eqc
builtin_initialize registerTraceClass `grind.internalize
builtin_initialize registerTraceClass `grind.ematch
builtin_initialize registerTraceClass `grind.ematch.pattern
builtin_initialize registerTraceClass `grind.ematch.instance
builtin_initialize registerTraceClass `grind.ematch.instance.assignment
builtin_initialize registerTraceClass `grind.eqResolution
builtin_initialize registerTraceClass `grind.issues
builtin_initialize registerTraceClass `grind.simp
builtin_initialize registerTraceClass `grind.split
builtin_initialize registerTraceClass `grind.split.candidate
builtin_initialize registerTraceClass `grind.split.resolved
builtin_initialize registerTraceClass `grind.beta
builtin_initialize registerTraceClass `grind.mbtc
builtin_initialize registerTraceClass `grind.ext
builtin_initialize registerTraceClass `grind.ext.candidate
builtin_initialize registerTraceClass `grind.lookahead
builtin_initialize registerTraceClass `grind.lookahead.add (inherited := true)
builtin_initialize registerTraceClass `grind.lookahead.try (inherited := true)
builtin_initialize registerTraceClass `grind.lookahead.assert (inherited := true)

/-! Trace options for `grind` developers -/
builtin_initialize registerTraceClass `grind.debug
builtin_initialize registerTraceClass `grind.debug.proofs
builtin_initialize registerTraceClass `grind.debug.congr
builtin_initialize registerTraceClass `grind.debug.proof
builtin_initialize registerTraceClass `grind.debug.proj
builtin_initialize registerTraceClass `grind.debug.parent
builtin_initialize registerTraceClass `grind.debug.final
builtin_initialize registerTraceClass `grind.debug.forallPropagator
builtin_initialize registerTraceClass `grind.debug.split
builtin_initialize registerTraceClass `grind.debug.canon
builtin_initialize registerTraceClass `grind.debug.ematch.activate
builtin_initialize registerTraceClass `grind.debug.ematch.pattern
builtin_initialize registerTraceClass `grind.debug.beta
builtin_initialize registerTraceClass `grind.debug.internalize
builtin_initialize registerTraceClass `grind.debug.matchCond
builtin_initialize registerTraceClass `grind.debug.matchCond.lambda
builtin_initialize registerTraceClass `grind.debug.matchCond.proveFalse
builtin_initialize registerTraceClass `grind.debug.mbtc
builtin_initialize registerTraceClass `grind.debug.ematch
builtin_initialize registerTraceClass `grind.debug.proveEq
builtin_initialize registerTraceClass `grind.debug.pushNewFact
builtin_initialize registerTraceClass `grind.debug.appMap
builtin_initialize registerTraceClass `grind.debug.ext

end Lean
