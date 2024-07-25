// Lean compiler output
// Module: Lean.Meta.Diagnostics
// Imports: Lean.PrettyPrinter Lean.Meta.Basic Lean.Meta.Instances
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___rarg(lean_object*);
extern lean_object* l_Lean_diagExt;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSynthPendingFailure___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static double l_Lean_Meta_appendSection___closed__1;
static lean_object* l_Lean_Meta_reportDiag___closed__11;
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold(lean_object*);
static lean_object* l_Lean_Meta_mkDiagSynthPendingFailure___closed__1;
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_lt___boxed(lean_object*, lean_object*);
lean_object* l_Array_qpartition___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_mkDiagSummary___closed__3;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSummary___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiagSummary_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__18;
static lean_object* l_Lean_Meta_instInhabitedDiagSummary___closed__1;
LEAN_EXPORT uint8_t l_Lean_Meta_mkDiagSummaryForUsedInstances___lambda__1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_DiagSummary_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___at_Lean_Meta_registerCoercion___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_subCounters___rarg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfolded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__17;
static lean_object* l_Lean_Meta_reportDiag___closed__3;
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiagSummary_max___default;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSynthPendingFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___lambda__1(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_appendSection___closed__3;
LEAN_EXPORT uint8_t l_Lean_Meta_mkDiagSummaryForUnfolded___lambda__1(lean_object*, uint8_t, lean_object*);
extern lean_object* l_instInhabitedNat;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUsedInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instInhabitedDiagSummary;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_isInstanceCore(lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_getState___rarg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reportDiag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_get_reducibility_status(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfolded___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSummary___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfolded(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiagSummary_data___default;
lean_object* l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__14;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5(lean_object*);
lean_object* l_outOfBounds___rarg(lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__20;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___lambda__1___boxed(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_collectAboveThreshold___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSynthPendingFailure___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__2;
static lean_object* l_Lean_Meta_mkDiagSummary___closed__2;
static lean_object* l_Lean_Meta_reportDiag___closed__6;
static lean_object* l_Lean_Meta_appendSection___closed__4;
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at_Lean_Meta_mkDiagSynthPendingFailure___spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6(lean_object*);
extern lean_object* l_Lean_MessageData_nil;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__5;
lean_object* l_Lean_MessageData_ofConst(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfoldedReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__9;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__6;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUsedInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendSection(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSynthPendingFailure___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__5;
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSynthPendingFailure___spec__2___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_mkDiagSynthPendingFailure___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_subCounters___rarg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_appendSection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Kernel_instInhabitedDiagnostics;
extern lean_object* l_Lean_Meta_maxSynthPendingDepth;
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__4;
static lean_object* l_Lean_Meta_reportDiag___closed__15;
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7___lambda__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__11;
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUsedInstances___lambda__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_mkDiagSummary___closed__1;
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_mkDiagSummary___spec__3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__7;
static lean_object* l_Lean_Meta_reportDiag___closed__8;
extern lean_object* l_Lean_diagnostics_threshold;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__9;
static lean_object* l_Lean_Meta_reportDiag___closed__13;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__3;
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
static lean_object* l_Lean_Meta_appendSection___closed__2;
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__19;
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__10;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__16;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_mkDiagSummaryForUsedInstances___closed__1;
lean_object* l_Lean_isDiagnosticsEnabled(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_reportDiag___closed__1;
static lean_object* l_Lean_Meta_reportDiag___closed__12;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at_Lean_Meta_mkDiagSynthPendingFailure___spec__1___boxed(lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_array_uget(x_2, x_3);
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = lean_apply_3(x_1, x_5, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; size_t x_15; size_t x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = 1;
x_16 = lean_usize_add(x_3, x_15);
x_3 = x_16;
x_5 = x_14;
goto _start;
}
}
case 1:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
lean_dec(x_7);
lean_inc(x_1);
x_19 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3___rarg(x_1, x_18, x_5);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; size_t x_24; size_t x_25; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = 1;
x_25 = lean_usize_add(x_3, x_24);
x_3 = x_25;
x_5 = x_23;
goto _start;
}
}
default: 
{
size_t x_27; size_t x_28; 
x_27 = 1;
x_28 = lean_usize_add(x_3, x_27);
x_3 = x_28;
goto _start;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_1);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_5);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg___boxed), 5, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_array_fget(x_2, x_5);
x_11 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_12 = lean_apply_3(x_1, x_6, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_5);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_18;
x_6 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5___rarg___boxed), 6, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
lean_free_object(x_2);
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg(x_1, x_5, x_10, x_11, x_3);
lean_dec(x_5);
return x_12;
}
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_array_get_size(x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_lt(x_15, x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_1);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_3);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_14, x_14);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_1);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_3);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg(x_1, x_13, x_20, x_21, x_3);
lean_dec(x_13);
return x_22;
}
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5___rarg(x_1, x_23, x_24, lean_box(0), x_25, x_3);
lean_dec(x_24);
lean_dec(x_23);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3___rarg), 3, 0);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3___rarg(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_apply_2(x_1, x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg___lambda__1), 4, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_collectAboveThreshold___spec__3___rarg(x_6, x_3, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_9 = lean_nat_dec_lt(x_7, x_5);
lean_dec(x_5);
lean_dec(x_7);
x_10 = lean_box(x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_5);
x_11 = lean_apply_2(x_1, x_4, x_6);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_nat_dec_lt(x_3, x_4);
if (x_6 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_3);
x_7 = l_Array_qpartition___rarg(x_2, x_5, x_3, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_nat_dec_le(x_4, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_11 = l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg(x_1, x_9, x_3, x_8);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
x_2 = x_11;
x_3 = x_13;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg___boxed), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_nat_dec_lt(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_free_object(x_3);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_4);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
lean_inc(x_6);
x_10 = lean_apply_1(x_2, x_6);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_free_object(x_3);
lean_dec(x_7);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_push(x_4, x_3);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
x_17 = lean_nat_dec_lt(x_1, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_2);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_4);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_inc(x_15);
x_19 = lean_apply_1(x_2, x_15);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_16);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_4);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_16);
x_23 = lean_array_push(x_4, x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_collectAboveThreshold___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_7 = lean_alloc_closure((void*)(l_Lean_Meta_collectAboveThreshold___rarg___lambda__1___boxed), 4, 2);
lean_closure_set(x_7, 0, x_4);
lean_closure_set(x_7, 1, x_5);
x_8 = l_Lean_Meta_collectAboveThreshold___rarg___closed__1;
x_9 = l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg(x_1, x_2, x_3, x_8, x_7);
x_10 = lean_array_get_size(x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_10, x_11);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg(x_6, x_9, x_13, x_12);
lean_dec(x_12);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_collectAboveThreshold___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_collectAboveThreshold___spec__4___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_collectAboveThreshold___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_collectAboveThreshold___spec__2(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_qsort_sort___at_Lean_Meta_collectAboveThreshold___spec__6___rarg(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_collectAboveThreshold___rarg___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_collectAboveThreshold___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, size_t x_8, size_t x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_eq(x_8, x_9);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_7, x_8);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_6);
x_15 = lean_apply_3(x_6, x_10, x_13, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
lean_dec(x_6);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
return x_15;
}
else
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
else
{
lean_object* x_19; size_t x_20; size_t x_21; 
x_19 = lean_ctor_get(x_15, 0);
lean_inc(x_19);
lean_dec(x_15);
x_20 = 1;
x_21 = lean_usize_add(x_8, x_20);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_box(0);
x_8 = x_21;
x_10 = x_19;
goto _start;
}
}
case 1:
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
lean_inc(x_6);
x_24 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0), x_6, x_23, x_10);
if (lean_obj_tag(x_24) == 0)
{
uint8_t x_25; 
lean_dec(x_6);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
return x_24;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_24, 0);
lean_inc(x_26);
lean_dec(x_24);
x_27 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_27, 0, x_26);
return x_27;
}
}
else
{
lean_object* x_28; size_t x_29; size_t x_30; 
x_28 = lean_ctor_get(x_24, 0);
lean_inc(x_28);
lean_dec(x_24);
x_29 = 1;
x_30 = lean_usize_add(x_8, x_29);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_box(0);
x_8 = x_30;
x_10 = x_28;
goto _start;
}
}
default: 
{
size_t x_32; size_t x_33; 
x_32 = 1;
x_33 = lean_usize_add(x_8, x_32);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_box(0);
x_8 = x_33;
goto _start;
}
}
}
else
{
lean_object* x_35; 
lean_dec(x_6);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_10);
return x_35;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg___boxed), 10, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_7);
x_13 = lean_nat_dec_lt(x_10, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_6);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_11);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_array_fget(x_7, x_10);
x_16 = lean_array_fget(x_8, x_10);
lean_inc(x_6);
x_17 = lean_apply_3(x_6, x_11, x_15, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
lean_dec(x_10);
lean_dec(x_6);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_17, 0);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_20, 0, x_19);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_17, 0);
lean_inc(x_21);
lean_dec(x_17);
x_22 = lean_unsigned_to_nat(1u);
x_23 = lean_nat_add(x_10, x_22);
lean_dec(x_10);
x_3 = lean_box(0);
x_4 = lean_box(0);
x_5 = lean_box(0);
x_9 = lean_box(0);
x_10 = x_23;
x_11 = x_21;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5___rarg___boxed), 11, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_7, 0);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_8);
return x_7;
}
else
{
uint8_t x_14; 
x_14 = lean_nat_dec_le(x_11, x_11);
if (x_14 == 0)
{
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_ctor_set_tag(x_7, 1);
lean_ctor_set(x_7, 0, x_8);
return x_7;
}
else
{
size_t x_15; size_t x_16; lean_object* x_17; 
lean_free_object(x_7);
x_15 = 0;
x_16 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_17 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0), x_6, x_10, x_15, x_16, x_8);
lean_dec(x_10);
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
lean_dec(x_7);
x_19 = lean_array_get_size(x_18);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_nat_dec_lt(x_20, x_19);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_8);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_19, x_19);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_8);
return x_24;
}
else
{
size_t x_25; size_t x_26; lean_object* x_27; 
x_25 = 0;
x_26 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_27 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0), x_6, x_18, x_25, x_26, x_8);
lean_dec(x_18);
return x_27;
}
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_28 = lean_ctor_get(x_7, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_7, 1);
lean_inc(x_29);
lean_dec(x_7);
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0), x_6, x_28, x_29, lean_box(0), x_30, x_8);
lean_dec(x_29);
lean_dec(x_28);
return x_31;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg___boxed), 8, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0), x_4, x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at_Lean_Meta_collectAboveThreshold___spec__1___rarg___lambda__1), 4, 1);
lean_closure_set(x_6, 0, x_5);
x_7 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg(x_1, x_2, lean_box(0), lean_box(0), lean_box(0), x_6, x_3, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1___rarg___boxed), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_4, 1);
lean_inc(x_7);
lean_dec(x_4);
lean_inc(x_6);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_Lean_PersistentHashMap_find_x3f___rarg(x_1, x_2, x_3, x_6);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_PersistentHashMap_insert___rarg(x_1, x_2, x_5, x_6, x_7);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_8);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_nat_sub(x_7, x_12);
lean_dec(x_12);
lean_dec(x_7);
x_14 = l_Lean_PersistentHashMap_insert___rarg(x_1, x_2, x_5, x_6, x_13);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_8, 0);
lean_inc(x_15);
lean_dec(x_8);
x_16 = lean_nat_sub(x_7, x_15);
lean_dec(x_15);
lean_dec(x_7);
x_17 = l_Lean_PersistentHashMap_insert___rarg(x_1, x_2, x_5, x_6, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_Meta_subCounters___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_subCounters___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_subCounters___rarg___closed__1;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Lean_Meta_subCounters___rarg___lambda__1), 5, 3);
lean_closure_set(x_5, 0, x_1);
lean_closure_set(x_5, 1, x_2);
lean_closure_set(x_5, 2, x_4);
x_6 = l_Lean_Meta_subCounters___rarg___closed__2;
x_7 = l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1___rarg(x_1, x_2, x_3, x_6, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subCounters(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_subCounters___rarg), 4, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_8);
lean_dec(x_8);
x_12 = lean_unbox_usize(x_9);
lean_dec(x_9);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_subCounters___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11, x_12, x_10);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_subCounters___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_subCounters___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_2);
lean_dec(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_subCounters___spec__2___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_PersistentHashMap_forIn___at_Lean_Meta_subCounters___spec__1___rarg(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Meta_DiagSummary_data___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_collectAboveThreshold___rarg___closed__1;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_DiagSummary_max___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedDiagSummary___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_collectAboveThreshold___rarg___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedDiagSummary() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_instInhabitedDiagSummary___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_DiagSummary_isEmpty(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = l_Array_isEmpty___rarg(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiagSummary_isEmpty___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_DiagSummary_isEmpty(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_usize_dec_eq(x_3, x_4);
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_array_uget(x_2, x_3);
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = lean_apply_3(x_1, x_5, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
lean_dec(x_1);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; size_t x_15; size_t x_16; 
x_14 = lean_ctor_get(x_10, 0);
lean_inc(x_14);
lean_dec(x_10);
x_15 = 1;
x_16 = lean_usize_add(x_3, x_15);
x_3 = x_16;
x_5 = x_14;
goto _start;
}
}
case 1:
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
lean_dec(x_7);
lean_inc(x_1);
x_19 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4___rarg(x_1, x_18, x_5);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
return x_19;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
else
{
lean_object* x_23; size_t x_24; size_t x_25; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = 1;
x_25 = lean_usize_add(x_3, x_24);
x_3 = x_25;
x_5 = x_23;
goto _start;
}
}
default: 
{
size_t x_27; size_t x_28; 
x_27 = 1;
x_28 = lean_usize_add(x_3, x_27);
x_3 = x_28;
goto _start;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_1);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_5);
return x_30;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg___boxed), 5, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_get_size(x_2);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_1);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_array_fget(x_2, x_5);
x_11 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
x_12 = lean_apply_3(x_1, x_6, x_10, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
lean_dec(x_5);
lean_dec(x_1);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
return x_12;
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_5, x_17);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_18;
x_6 = x_16;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6___rarg___boxed), 6, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_3);
return x_2;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
lean_free_object(x_2);
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg(x_1, x_5, x_10, x_11, x_3);
lean_dec(x_5);
return x_12;
}
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
lean_dec(x_2);
x_14 = lean_array_get_size(x_13);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_lt(x_15, x_14);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_1);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_3);
return x_17;
}
else
{
uint8_t x_18; 
x_18 = lean_nat_dec_le(x_14, x_14);
if (x_18 == 0)
{
lean_object* x_19; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_1);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_3);
return x_19;
}
else
{
size_t x_20; size_t x_21; lean_object* x_22; 
x_20 = 0;
x_21 = lean_usize_of_nat(x_14);
lean_dec(x_14);
x_22 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg(x_1, x_13, x_20, x_21, x_3);
lean_dec(x_13);
return x_22;
}
}
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
lean_dec(x_2);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6___rarg(x_1, x_23, x_24, lean_box(0), x_25, x_3);
lean_dec(x_24);
lean_dec(x_23);
return x_26;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4___rarg), 3, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_mkDiagSummary___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4___rarg(x_2, x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSummary___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
x_6 = lean_apply_2(x_1, x_5, x_2);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
return x_6;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
return x_6;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_6, 0);
lean_inc(x_11);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSummary___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSummary___spec__2___lambda__1), 4, 1);
lean_closure_set(x_4, 0, x_3);
x_5 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSummary___spec__4___rarg(x_4, x_1, x_2);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec(x_3);
x_8 = lean_nat_dec_eq(x_5, x_7);
if (x_8 == 0)
{
uint8_t x_9; lean_object* x_10; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_9 = lean_nat_dec_lt(x_7, x_5);
lean_dec(x_5);
lean_dec(x_7);
x_10 = lean_box(x_9);
return x_10;
}
else
{
lean_object* x_11; 
lean_dec(x_7);
lean_dec(x_5);
x_11 = lean_apply_2(x_1, x_4, x_6);
return x_11;
}
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
lean_inc(x_1);
x_5 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7___lambda__1), 3, 1);
lean_closure_set(x_5, 0, x_1);
x_6 = lean_nat_dec_lt(x_3, x_4);
if (x_6 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_3);
x_7 = l_Array_qpartition___rarg(x_2, x_5, x_3, x_4);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_nat_dec_le(x_4, x_8);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_inc(x_1);
x_11 = l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7(x_1, x_9, x_3, x_8);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_add(x_8, x_12);
lean_dec(x_8);
x_2 = x_11;
x_3 = x_13;
goto _start;
}
else
{
lean_dec(x_8);
lean_dec(x_3);
lean_dec(x_1);
return x_9;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_3);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_3, 1);
x_8 = lean_nat_dec_lt(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_free_object(x_3);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_4);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
lean_inc(x_6);
x_10 = lean_apply_1(x_2, x_6);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_free_object(x_3);
lean_dec(x_7);
lean_dec(x_6);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_push(x_4, x_3);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
}
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_ctor_get(x_3, 0);
x_16 = lean_ctor_get(x_3, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_3);
x_17 = lean_nat_dec_lt(x_1, x_16);
if (x_17 == 0)
{
lean_object* x_18; 
lean_dec(x_16);
lean_dec(x_15);
lean_dec(x_2);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_4);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_inc(x_15);
x_19 = lean_apply_1(x_2, x_15);
x_20 = lean_unbox(x_19);
lean_dec(x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_16);
lean_dec(x_15);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_4);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_15);
lean_ctor_set(x_22, 1, x_16);
x_23 = lean_array_push(x_4, x_22);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_alloc_closure((void*)(l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1___lambda__1___boxed), 4, 2);
lean_closure_set(x_5, 0, x_2);
lean_closure_set(x_5, 1, x_3);
x_6 = l_Lean_Meta_collectAboveThreshold___rarg___closed__1;
x_7 = l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSummary___spec__2(x_1, x_6, x_5);
x_8 = lean_array_get_size(x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_8, x_9);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(0u);
x_12 = l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7(x_4, x_7, x_11, x_10);
lean_dec(x_10);
return x_12;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" ↦ ", 5, 3);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\n", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__6;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__7;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("  ", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__9;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__10;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__11;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = lean_usize_dec_lt(x_3, x_2);
if (x_10 == 0)
{
lean_object* x_11; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_4);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_uget(x_1, x_3);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = l_Lean_mkConstWithLevelParams___at_Lean_Meta_registerCoercion___spec__1(x_14, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Array_isEmpty___rarg(x_4);
x_20 = l_Lean_MessageData_ofConst(x_17);
x_21 = l___private_Init_Data_Repr_0__Nat_reprFast(x_15);
x_22 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = l_Lean_MessageData_ofFormat(x_22);
if (x_19 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; size_t x_31; size_t x_32; 
x_24 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_20);
lean_ctor_set(x_12, 0, x_24);
x_25 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_12);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_23);
x_28 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_29 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_array_push(x_4, x_29);
x_31 = 1;
x_32 = lean_usize_add(x_3, x_31);
x_3 = x_32;
x_4 = x_30;
x_9 = x_18;
goto _start;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; size_t x_41; size_t x_42; 
x_34 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12;
lean_ctor_set_tag(x_12, 7);
lean_ctor_set(x_12, 1, x_20);
lean_ctor_set(x_12, 0, x_34);
x_35 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4;
x_36 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_36, 0, x_12);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_23);
x_38 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_39 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_array_push(x_4, x_39);
x_41 = 1;
x_42 = lean_usize_add(x_3, x_41);
x_3 = x_42;
x_4 = x_40;
x_9 = x_18;
goto _start;
}
}
else
{
uint8_t x_44; 
lean_free_object(x_12);
lean_dec(x_15);
lean_dec(x_4);
x_44 = !lean_is_exclusive(x_16);
if (x_44 == 0)
{
return x_16;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_16, 0);
x_46 = lean_ctor_get(x_16, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_16);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_12, 0);
x_49 = lean_ctor_get(x_12, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_12);
x_50 = l_Lean_mkConstWithLevelParams___at_Lean_Meta_registerCoercion___spec__1(x_48, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = l_Array_isEmpty___rarg(x_4);
x_54 = l_Lean_MessageData_ofConst(x_51);
x_55 = l___private_Init_Data_Repr_0__Nat_reprFast(x_49);
x_56 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_56, 0, x_55);
x_57 = l_Lean_MessageData_ofFormat(x_56);
if (x_53 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; size_t x_66; size_t x_67; 
x_58 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8;
x_59 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_54);
x_60 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4;
x_61 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_57);
x_63 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_64 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_push(x_4, x_64);
x_66 = 1;
x_67 = lean_usize_add(x_3, x_66);
x_3 = x_67;
x_4 = x_65;
x_9 = x_52;
goto _start;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; size_t x_77; size_t x_78; 
x_69 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12;
x_70 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_54);
x_71 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4;
x_72 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_57);
x_74 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_75 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_push(x_4, x_75);
x_77 = 1;
x_78 = lean_usize_add(x_3, x_77);
x_3 = x_78;
x_4 = x_76;
x_9 = x_52;
goto _start;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_49);
lean_dec(x_4);
x_80 = lean_ctor_get(x_50, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_50, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_82 = x_50;
} else {
 lean_dec_ref(x_50);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_mkDiagSummary___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagnostics_threshold;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_mkDiagSummary___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Name_lt___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_mkDiagSummary___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_instInhabitedName;
x_2 = l_instInhabitedNat;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummary(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_5, 2);
x_9 = l_Lean_Meta_mkDiagSummary___closed__1;
x_10 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_8, x_9);
x_11 = l_Lean_Meta_mkDiagSummary___closed__2;
x_12 = l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1(x_1, x_10, x_2, x_11);
x_13 = l_Array_isEmpty___rarg(x_12);
if (x_13 == 0)
{
size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_array_size(x_12);
x_15 = 0;
x_16 = l_Lean_Meta_collectAboveThreshold___rarg___closed__1;
x_17 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8(x_12, x_14, x_15, x_16, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_array_get_size(x_12);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_21, x_20);
lean_dec(x_20);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_12);
x_23 = l_Lean_Meta_mkDiagSummary___closed__3;
x_24 = l_outOfBounds___rarg(x_23);
x_25 = !lean_is_exclusive(x_24);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_ctor_get(x_24, 0);
lean_dec(x_26);
lean_ctor_set(x_24, 0, x_19);
lean_ctor_set(x_17, 0, x_24);
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_19);
lean_ctor_set(x_28, 1, x_27);
lean_ctor_set(x_17, 0, x_28);
return x_17;
}
}
else
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_array_fget(x_12, x_21);
lean_dec(x_12);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_29, 0);
lean_dec(x_31);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_17, 0, x_29);
return x_17;
}
else
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_dec(x_29);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_19);
lean_ctor_set(x_33, 1, x_32);
lean_ctor_set(x_17, 0, x_33);
return x_17;
}
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_ctor_get(x_17, 0);
x_35 = lean_ctor_get(x_17, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_17);
x_36 = lean_array_get_size(x_12);
x_37 = lean_unsigned_to_nat(0u);
x_38 = lean_nat_dec_lt(x_37, x_36);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_12);
x_39 = l_Lean_Meta_mkDiagSummary___closed__3;
x_40 = l_outOfBounds___rarg(x_39);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 x_42 = x_40;
} else {
 lean_dec_ref(x_40);
 x_42 = lean_box(0);
}
if (lean_is_scalar(x_42)) {
 x_43 = lean_alloc_ctor(0, 2, 0);
} else {
 x_43 = x_42;
}
lean_ctor_set(x_43, 0, x_34);
lean_ctor_set(x_43, 1, x_41);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_35);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_array_fget(x_12, x_37);
lean_dec(x_12);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_45)) {
 lean_ctor_release(x_45, 0);
 lean_ctor_release(x_45, 1);
 x_47 = x_45;
} else {
 lean_dec_ref(x_45);
 x_47 = lean_box(0);
}
if (lean_is_scalar(x_47)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_47;
}
lean_ctor_set(x_48, 0, x_34);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_35);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_12);
x_50 = !lean_is_exclusive(x_17);
if (x_50 == 0)
{
return x_17;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_17, 0);
x_52 = lean_ctor_get(x_17, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_17);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_12);
x_54 = l_Lean_Meta_instInhabitedDiagSummary___closed__1;
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_7);
return x_55;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSummary___spec__5___rarg(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSummary___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Array_qsort_sort___at_Lean_Meta_mkDiagSummary___spec__7(x_1, x_2, x_3, x_4);
lean_dec(x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Meta_collectAboveThreshold___at_Lean_Meta_mkDiagSummary___spec__1___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8(x_1, x_10, x_11, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummary___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_mkDiagSummary(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_mkDiagSummaryForUnfolded___lambda__1(lean_object* x_1, uint8_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_get_reducibility_status(x_1, x_3);
x_5 = lean_box(x_4);
if (lean_obj_tag(x_5) == 1)
{
uint8_t x_6; 
x_6 = l_Lean_Meta_isInstanceCore(x_1, x_3);
lean_dec(x_3);
lean_dec(x_1);
if (x_6 == 0)
{
if (x_2 == 0)
{
uint8_t x_7; 
x_7 = 1;
return x_7;
}
else
{
uint8_t x_8; 
x_8 = 0;
return x_8;
}
}
else
{
return x_2;
}
}
else
{
uint8_t x_9; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_9 = 0;
return x_9;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfolded(lean_object* x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_st_ref_get(x_6, x_7);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(x_2);
x_13 = lean_alloc_closure((void*)(l_Lean_Meta_mkDiagSummaryForUnfolded___lambda__1___boxed), 3, 2);
lean_closure_set(x_13, 0, x_11);
lean_closure_set(x_13, 1, x_12);
x_14 = l_Lean_Meta_mkDiagSummary(x_1, x_13, x_3, x_4, x_5, x_6, x_10);
return x_14;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfolded___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_Lean_Meta_mkDiagSummaryForUnfolded___lambda__1(x_1, x_4, x_3);
x_6 = lean_box(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfolded___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; lean_object* x_9; 
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Lean_Meta_mkDiagSummaryForUnfolded(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_get_reducibility_status(x_1, x_2);
x_4 = lean_box(x_3);
if (lean_obj_tag(x_4) == 0)
{
uint8_t x_5; 
x_5 = 1;
return x_5;
}
else
{
uint8_t x_6; 
lean_dec(x_4);
x_6 = 0;
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfoldedReducible(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_st_ref_get(x_5, x_6);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_alloc_closure((void*)(l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_10);
x_12 = l_Lean_Meta_mkDiagSummary(x_1, x_11, x_2, x_3, x_4, x_5, x_9);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___lambda__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUnfoldedReducible___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Meta_mkDiagSummaryForUnfoldedReducible(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_mkDiagSummaryForUsedInstances___lambda__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_mkDiagSummaryForUsedInstances___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_mkDiagSummaryForUsedInstances___lambda__1___boxed), 1, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUsedInstances(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_6 = lean_st_ref_get(x_2, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_ctor_get(x_7, 4);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_9, 2);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_Meta_mkDiagSummaryForUsedInstances___closed__1;
x_12 = l_Lean_Meta_mkDiagSummary(x_10, x_11, x_1, x_2, x_3, x_4, x_8);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUsedInstances___lambda__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_Meta_mkDiagSummaryForUsedInstances___lambda__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSummaryForUsedInstances___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_mkDiagSummaryForUsedInstances(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at_Lean_Meta_mkDiagSynthPendingFailure___spec__1(lean_object* x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_Lean_PersistentHashMap_Node_isEmpty___rarg(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_usize_dec_eq(x_3, x_4);
if (x_11 == 0)
{
lean_object* x_12; 
x_12 = lean_array_uget(x_2, x_3);
switch (lean_obj_tag(x_12)) {
case 0:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_15 = lean_apply_8(x_1, x_5, x_13, x_14, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
if (lean_obj_tag(x_16) == 0)
{
uint8_t x_17; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_17 = !lean_is_exclusive(x_15);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_ctor_get(x_15, 0);
lean_dec(x_18);
x_19 = !lean_is_exclusive(x_16);
if (x_19 == 0)
{
return x_15;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_16, 0);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_15, 0, x_21);
return x_15;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_15, 1);
lean_inc(x_22);
lean_dec(x_15);
x_23 = lean_ctor_get(x_16, 0);
lean_inc(x_23);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 x_24 = x_16;
} else {
 lean_dec_ref(x_16);
 x_24 = lean_box(0);
}
if (lean_is_scalar(x_24)) {
 x_25 = lean_alloc_ctor(0, 1, 0);
} else {
 x_25 = x_24;
}
lean_ctor_set(x_25, 0, x_23);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_22);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; size_t x_29; size_t x_30; 
x_27 = lean_ctor_get(x_15, 1);
lean_inc(x_27);
lean_dec(x_15);
x_28 = lean_ctor_get(x_16, 0);
lean_inc(x_28);
lean_dec(x_16);
x_29 = 1;
x_30 = lean_usize_add(x_3, x_29);
x_3 = x_30;
x_5 = x_28;
x_10 = x_27;
goto _start;
}
}
else
{
uint8_t x_32; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_15);
if (x_32 == 0)
{
return x_15;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_15, 0);
x_34 = lean_ctor_get(x_15, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_15);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
case 1:
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_12, 0);
lean_inc(x_36);
lean_dec(x_12);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_37 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4___rarg(x_1, x_36, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
if (lean_obj_tag(x_38) == 0)
{
uint8_t x_39; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_37);
if (x_39 == 0)
{
lean_object* x_40; uint8_t x_41; 
x_40 = lean_ctor_get(x_37, 0);
lean_dec(x_40);
x_41 = !lean_is_exclusive(x_38);
if (x_41 == 0)
{
return x_37;
}
else
{
lean_object* x_42; lean_object* x_43; 
x_42 = lean_ctor_get(x_38, 0);
lean_inc(x_42);
lean_dec(x_38);
x_43 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_37, 0, x_43);
return x_37;
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_dec(x_37);
x_45 = lean_ctor_get(x_38, 0);
lean_inc(x_45);
if (lean_is_exclusive(x_38)) {
 lean_ctor_release(x_38, 0);
 x_46 = x_38;
} else {
 lean_dec_ref(x_38);
 x_46 = lean_box(0);
}
if (lean_is_scalar(x_46)) {
 x_47 = lean_alloc_ctor(0, 1, 0);
} else {
 x_47 = x_46;
}
lean_ctor_set(x_47, 0, x_45);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_44);
return x_48;
}
}
else
{
lean_object* x_49; lean_object* x_50; size_t x_51; size_t x_52; 
x_49 = lean_ctor_get(x_37, 1);
lean_inc(x_49);
lean_dec(x_37);
x_50 = lean_ctor_get(x_38, 0);
lean_inc(x_50);
lean_dec(x_38);
x_51 = 1;
x_52 = lean_usize_add(x_3, x_51);
x_3 = x_52;
x_5 = x_50;
x_10 = x_49;
goto _start;
}
}
else
{
uint8_t x_54; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_37);
if (x_54 == 0)
{
return x_37;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_37, 0);
x_56 = lean_ctor_get(x_37, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_37);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
default: 
{
size_t x_58; size_t x_59; 
x_58 = 1;
x_59 = lean_usize_add(x_3, x_58);
x_3 = x_59;
goto _start;
}
}
}
else
{
lean_object* x_61; lean_object* x_62; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_5);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_10);
return x_62;
}
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg___boxed), 10, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; uint8_t x_13; 
x_12 = lean_array_get_size(x_2);
x_13 = lean_nat_dec_lt(x_5, x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_6);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_11);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_array_fget(x_2, x_5);
x_17 = lean_array_fget(x_3, x_5);
lean_inc(x_1);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_18 = lean_apply_8(x_1, x_6, x_16, x_17, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_18);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_ctor_get(x_18, 0);
lean_dec(x_21);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
return x_18;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_19, 0);
lean_inc(x_23);
lean_dec(x_19);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_18, 0, x_24);
return x_18;
}
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_dec(x_18);
x_26 = lean_ctor_get(x_19, 0);
lean_inc(x_26);
if (lean_is_exclusive(x_19)) {
 lean_ctor_release(x_19, 0);
 x_27 = x_19;
} else {
 lean_dec_ref(x_19);
 x_27 = lean_box(0);
}
if (lean_is_scalar(x_27)) {
 x_28 = lean_alloc_ctor(0, 1, 0);
} else {
 x_28 = x_27;
}
lean_ctor_set(x_28, 0, x_26);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_25);
return x_29;
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_18, 1);
lean_inc(x_30);
lean_dec(x_18);
x_31 = lean_ctor_get(x_19, 0);
lean_inc(x_31);
lean_dec(x_19);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_add(x_5, x_32);
lean_dec(x_5);
x_4 = lean_box(0);
x_5 = x_33;
x_6 = x_31;
x_11 = x_30;
goto _start;
}
}
else
{
uint8_t x_35; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_18);
if (x_35 == 0)
{
return x_18;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_18, 0);
x_37 = lean_ctor_get(x_18, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_18);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6___rarg___boxed), 11, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_2);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_3);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_2);
lean_ctor_set(x_14, 1, x_8);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_11, x_11);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
lean_ctor_set_tag(x_2, 1);
lean_ctor_set(x_2, 0, x_3);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_8);
return x_16;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; 
lean_free_object(x_2);
x_17 = 0;
x_18 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_19 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg(x_1, x_10, x_17, x_18, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_10);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_2, 0);
lean_inc(x_20);
lean_dec(x_2);
x_21 = lean_array_get_size(x_20);
x_22 = lean_unsigned_to_nat(0u);
x_23 = lean_nat_dec_lt(x_22, x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_3);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_8);
return x_25;
}
else
{
uint8_t x_26; 
x_26 = lean_nat_dec_le(x_21, x_21);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_3);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_8);
return x_28;
}
else
{
size_t x_29; size_t x_30; lean_object* x_31; 
x_29 = 0;
x_30 = lean_usize_of_nat(x_21);
lean_dec(x_21);
x_31 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg(x_1, x_20, x_29, x_30, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_20);
return x_31;
}
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_2, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_2, 1);
lean_inc(x_33);
lean_dec(x_2);
x_34 = lean_unsigned_to_nat(0u);
x_35 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6___rarg(x_1, x_32, x_33, lean_box(0), x_34, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_33);
lean_dec(x_32);
return x_35;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4___rarg), 8, 0);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at_Lean_Meta_mkDiagSynthPendingFailure___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4___rarg(x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSynthPendingFailure___spec__2___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_4);
x_11 = lean_apply_7(x_1, x_10, x_2, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_11);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_11, 0);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_12);
if (x_15 == 0)
{
return x_11;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_12, 0);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_ctor_get(x_12, 0);
lean_inc(x_19);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 x_20 = x_12;
} else {
 lean_dec_ref(x_12);
 x_20 = lean_box(0);
}
if (lean_is_scalar(x_20)) {
 x_21 = lean_alloc_ctor(0, 1, 0);
} else {
 x_21 = x_20;
}
lean_ctor_set(x_21, 0, x_19);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_18);
return x_22;
}
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_11);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = lean_ctor_get(x_11, 0);
lean_dec(x_24);
x_25 = !lean_is_exclusive(x_12);
if (x_25 == 0)
{
return x_11;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_12, 0);
lean_inc(x_26);
lean_dec(x_12);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_11, 0, x_27);
return x_11;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_28 = lean_ctor_get(x_11, 1);
lean_inc(x_28);
lean_dec(x_11);
x_29 = lean_ctor_get(x_12, 0);
lean_inc(x_29);
if (lean_is_exclusive(x_12)) {
 lean_ctor_release(x_12, 0);
 x_30 = x_12;
} else {
 lean_dec_ref(x_12);
 x_30 = lean_box(0);
}
if (lean_is_scalar(x_30)) {
 x_31 = lean_alloc_ctor(1, 1, 0);
} else {
 x_31 = x_30;
}
lean_ctor_set(x_31, 0, x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_28);
return x_32;
}
}
}
else
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_11);
if (x_33 == 0)
{
return x_11;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_11, 0);
x_35 = lean_ctor_get(x_11, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_11);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSynthPendingFailure___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSynthPendingFailure___spec__2___lambda__1), 9, 1);
lean_closure_set(x_9, 0, x_3);
x_10 = l_Lean_PersistentHashMap_foldlMAux___at_Lean_Meta_mkDiagSynthPendingFailure___spec__4___rarg(x_9, x_1, x_2, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
lean_dec(x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSynthPendingFailure___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_1);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_1, 0);
lean_dec(x_9);
x_10 = l_Array_isEmpty___rarg(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8;
lean_ctor_set_tag(x_1, 7);
lean_ctor_set(x_1, 0, x_11);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_13 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_array_push(x_2, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_7);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_17 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12;
lean_ctor_set_tag(x_1, 7);
lean_ctor_set(x_1, 0, x_17);
x_18 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_19 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_array_push(x_2, x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_7);
return x_22;
}
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_1, 1);
lean_inc(x_23);
lean_dec(x_1);
x_24 = l_Array_isEmpty___rarg(x_2);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_25 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8;
x_26 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_28 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_array_push(x_2, x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_7);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_32 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12;
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_23);
x_34 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2;
x_35 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_array_push(x_2, x_35);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_7);
return x_38;
}
}
}
}
static lean_object* _init_l_Lean_Meta_mkDiagSynthPendingFailure___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_mkDiagSynthPendingFailure___lambda__1___boxed), 7, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSynthPendingFailure(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = l_Lean_PersistentHashMap_Node_isEmpty___rarg(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Meta_collectAboveThreshold___rarg___closed__1;
x_9 = l_Lean_Meta_mkDiagSynthPendingFailure___closed__1;
x_10 = l_Lean_PersistentHashMap_forIn___at_Lean_Meta_mkDiagSynthPendingFailure___spec__2(x_1, x_8, x_9, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_10, 0, x_14);
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_10);
if (x_20 == 0)
{
return x_10;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_10, 0);
x_22 = lean_ctor_get(x_10, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_10);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = l_Lean_Meta_instInhabitedDiagSummary___closed__1;
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_6);
return x_25;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at_Lean_Meta_mkDiagSynthPendingFailure___spec__1___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Lean_PersistentHashMap_isEmpty___at_Lean_Meta_mkDiagSynthPendingFailure___spec__1(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
size_t x_11; size_t x_12; lean_object* x_13; 
x_11 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_mkDiagSynthPendingFailure___spec__5___rarg(x_1, x_2, x_11, x_12, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_2);
return x_13;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Lean_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_mkDiagSynthPendingFailure___spec__6___rarg(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkDiagSynthPendingFailure___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Meta_mkDiagSynthPendingFailure___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
static double _init_l_Lean_Meta_appendSection___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; double x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = 0;
x_3 = l_Float_ofScientific(x_1, x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_appendSection___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" (max: ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_appendSection___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(", num: ", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_appendSection___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("):", 2, 2);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendSection(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5) {
_start:
{
uint8_t x_6; 
x_6 = l_Lean_Meta_DiagSummary_isEmpty(x_4);
if (x_6 == 0)
{
double x_7; uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_7 = l_Lean_Meta_appendSection___closed__1;
x_8 = 1;
x_9 = l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__1;
x_10 = lean_alloc_ctor(0, 2, 17);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
lean_ctor_set_float(x_10, sizeof(void*)*2, x_7);
lean_ctor_set_float(x_10, sizeof(void*)*2 + 8, x_7);
lean_ctor_set_uint8(x_10, sizeof(void*)*2 + 16, x_8);
if (x_5 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
lean_dec(x_4);
x_12 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_12, 0, x_3);
x_13 = l_Lean_MessageData_ofFormat(x_12);
x_14 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
lean_ctor_set(x_14, 2, x_11);
x_15 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_16 = lean_ctor_get(x_4, 0);
lean_inc(x_16);
x_17 = lean_string_append(x_9, x_3);
lean_dec(x_3);
x_18 = l_Lean_Meta_appendSection___closed__2;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_ctor_get(x_4, 1);
lean_inc(x_20);
lean_dec(x_4);
x_21 = l___private_Init_Data_Repr_0__Nat_reprFast(x_20);
x_22 = lean_string_append(x_19, x_21);
lean_dec(x_21);
x_23 = l_Lean_Meta_appendSection___closed__3;
x_24 = lean_string_append(x_22, x_23);
x_25 = lean_array_get_size(x_16);
x_26 = l___private_Init_Data_Repr_0__Nat_reprFast(x_25);
x_27 = lean_string_append(x_24, x_26);
lean_dec(x_26);
x_28 = l_Lean_Meta_appendSection___closed__4;
x_29 = lean_string_append(x_27, x_28);
x_30 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l_Lean_MessageData_ofFormat(x_30);
x_32 = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(x_32, 0, x_10);
lean_ctor_set(x_32, 1, x_31);
lean_ctor_set(x_32, 2, x_16);
x_33 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_33, 0, x_1);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_1;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendSection___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_5);
lean_dec(x_5);
x_7 = l_Lean_Meta_appendSection(x_1, x_2, x_3, x_4, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_diagExt;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("reduction", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_reportDiag___closed__2;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unfolded declarations", 21, 21);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unfolded instances", 18, 18);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("unfolded reducible declarations", 31, 31);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("type_class", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_reportDiag___closed__7;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("used instances", 14, 14);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_maxSynthPendingDepth;
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("max synth pending failures (maxSynthPendingDepth: ", 50, 50);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("), use `set_option maxSynthPendingDepth <limit>`", 48, 48);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("def_eq", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_reportDiag___closed__13;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("heuristic for solving `f a =\?= f b`", 35, 35);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("kernel", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_reportDiag___closed__16;
x_3 = l_Lean_Name_str___override(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("use `set_option diagnostics.threshold <num>` to control threshold for reporting counters", 88, 88);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_reportDiag___closed__18;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_reportDiag___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_reportDiag___closed__19;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reportDiag(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = l_Lean_isDiagnosticsEnabled(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = !lean_is_exclusive(x_6);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_6, 0);
lean_dec(x_10);
x_11 = lean_box(0);
lean_ctor_set(x_6, 0, x_11);
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_6, 1);
lean_inc(x_12);
lean_dec(x_6);
x_13 = lean_box(0);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_12);
return x_14;
}
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; 
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_dec(x_6);
x_16 = lean_st_ref_get(x_2, x_15);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 4);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = 0;
lean_inc(x_20);
x_22 = l_Lean_Meta_mkDiagSummaryForUnfolded(x_20, x_21, x_1, x_2, x_3, x_4, x_18);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = 1;
lean_inc(x_20);
x_26 = l_Lean_Meta_mkDiagSummaryForUnfolded(x_20, x_25, x_1, x_2, x_3, x_4, x_24);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Meta_mkDiagSummaryForUnfoldedReducible(x_20, x_1, x_2, x_3, x_4, x_28);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_st_ref_get(x_2, x_31);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 4);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_Lean_Meta_mkDiagSummaryForUsedInstances___closed__1;
x_38 = l_Lean_Meta_mkDiagSummary(x_36, x_37, x_1, x_2, x_3, x_4, x_34);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Meta_mkDiagSummaryForUsedInstances(x_1, x_2, x_3, x_4, x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_st_ref_get(x_2, x_43);
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_ctor_get(x_45, 4);
lean_inc(x_47);
lean_dec(x_45);
x_48 = lean_ctor_get(x_47, 3);
lean_inc(x_48);
lean_dec(x_47);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_49 = l_Lean_Meta_mkDiagSynthPendingFailure(x_48, x_1, x_2, x_3, x_4, x_46);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_st_ref_get(x_4, x_51);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_ctor_get(x_52, 1);
x_56 = lean_ctor_get(x_54, 0);
lean_inc(x_56);
lean_dec(x_54);
x_57 = l_Lean_Kernel_instInhabitedDiagnostics;
x_58 = l_Lean_Meta_reportDiag___closed__1;
x_59 = l_Lean_EnvExtension_getState___rarg(x_57, x_58, x_56);
lean_dec(x_56);
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
lean_dec(x_59);
x_61 = l_Lean_Meta_mkDiagSummary(x_60, x_37, x_1, x_2, x_3, x_4, x_55);
if (lean_obj_tag(x_61) == 0)
{
uint8_t x_62; 
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_63 = lean_ctor_get(x_61, 0);
x_64 = lean_ctor_get(x_61, 1);
x_65 = l_Lean_MessageData_nil;
x_66 = l_Lean_Meta_reportDiag___closed__3;
x_67 = l_Lean_Meta_reportDiag___closed__4;
x_68 = l_Lean_Meta_appendSection(x_65, x_66, x_67, x_23, x_25);
x_69 = l_Lean_Meta_reportDiag___closed__5;
x_70 = l_Lean_Meta_appendSection(x_68, x_66, x_69, x_27, x_25);
x_71 = l_Lean_Meta_reportDiag___closed__6;
x_72 = l_Lean_Meta_appendSection(x_70, x_66, x_71, x_30, x_25);
x_73 = l_Lean_Meta_reportDiag___closed__8;
x_74 = l_Lean_Meta_reportDiag___closed__9;
x_75 = l_Lean_Meta_appendSection(x_72, x_73, x_74, x_42, x_25);
x_76 = lean_ctor_get(x_3, 2);
lean_inc(x_76);
x_77 = l_Lean_Meta_reportDiag___closed__10;
x_78 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_76, x_77);
lean_dec(x_76);
x_79 = l___private_Init_Data_Repr_0__Nat_reprFast(x_78);
x_80 = l_Lean_Meta_reportDiag___closed__11;
x_81 = lean_string_append(x_80, x_79);
lean_dec(x_79);
x_82 = l_Lean_Meta_reportDiag___closed__12;
x_83 = lean_string_append(x_81, x_82);
x_84 = l_Lean_Meta_appendSection(x_75, x_73, x_83, x_50, x_21);
x_85 = l_Lean_Meta_reportDiag___closed__14;
x_86 = l_Lean_Meta_reportDiag___closed__15;
x_87 = l_Lean_Meta_appendSection(x_84, x_85, x_86, x_39, x_25);
x_88 = l_Lean_Meta_reportDiag___closed__17;
x_89 = l_Lean_Meta_appendSection(x_87, x_88, x_67, x_63, x_25);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; 
lean_free_object(x_52);
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
switch (lean_obj_tag(x_91)) {
case 0:
{
uint8_t x_92; 
x_92 = !lean_is_exclusive(x_90);
if (x_92 == 0)
{
lean_object* x_93; lean_object* x_94; 
x_93 = lean_ctor_get(x_90, 1);
x_94 = lean_ctor_get(x_90, 0);
lean_dec(x_94);
if (lean_obj_tag(x_93) == 0)
{
lean_object* x_95; 
lean_free_object(x_90);
lean_dec(x_89);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_95 = lean_box(0);
lean_ctor_set(x_61, 0, x_95);
return x_61;
}
else
{
lean_object* x_96; uint8_t x_97; lean_object* x_98; 
lean_dec(x_93);
lean_free_object(x_61);
x_96 = l_Lean_Meta_reportDiag___closed__20;
lean_ctor_set_tag(x_90, 7);
lean_ctor_set(x_90, 1, x_96);
lean_ctor_set(x_90, 0, x_89);
x_97 = 0;
x_98 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_90, x_97, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_98;
}
}
else
{
lean_object* x_99; 
x_99 = lean_ctor_get(x_90, 1);
lean_inc(x_99);
lean_dec(x_90);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; 
lean_dec(x_89);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_100 = lean_box(0);
lean_ctor_set(x_61, 0, x_100);
return x_61;
}
else
{
lean_object* x_101; lean_object* x_102; uint8_t x_103; lean_object* x_104; 
lean_dec(x_99);
lean_free_object(x_61);
x_101 = l_Lean_Meta_reportDiag___closed__20;
x_102 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_102, 0, x_89);
lean_ctor_set(x_102, 1, x_101);
x_103 = 0;
x_104 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_102, x_103, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_104;
}
}
}
case 4:
{
uint8_t x_105; 
lean_dec(x_90);
lean_free_object(x_61);
x_105 = !lean_is_exclusive(x_91);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; lean_object* x_110; 
x_106 = lean_ctor_get(x_91, 1);
lean_dec(x_106);
x_107 = lean_ctor_get(x_91, 0);
lean_dec(x_107);
x_108 = l_Lean_Meta_reportDiag___closed__20;
lean_ctor_set_tag(x_91, 7);
lean_ctor_set(x_91, 1, x_108);
lean_ctor_set(x_91, 0, x_89);
x_109 = 0;
x_110 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_91, x_109, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_110;
}
else
{
lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; 
lean_dec(x_91);
x_111 = l_Lean_Meta_reportDiag___closed__20;
x_112 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_112, 0, x_89);
lean_ctor_set(x_112, 1, x_111);
x_113 = 0;
x_114 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_112, x_113, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_114;
}
}
case 5:
{
uint8_t x_115; 
lean_dec(x_90);
lean_free_object(x_61);
x_115 = !lean_is_exclusive(x_91);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; uint8_t x_119; lean_object* x_120; 
x_116 = lean_ctor_get(x_91, 1);
lean_dec(x_116);
x_117 = lean_ctor_get(x_91, 0);
lean_dec(x_117);
x_118 = l_Lean_Meta_reportDiag___closed__20;
lean_ctor_set_tag(x_91, 7);
lean_ctor_set(x_91, 1, x_118);
lean_ctor_set(x_91, 0, x_89);
x_119 = 0;
x_120 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_91, x_119, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_120;
}
else
{
lean_object* x_121; lean_object* x_122; uint8_t x_123; lean_object* x_124; 
lean_dec(x_91);
x_121 = l_Lean_Meta_reportDiag___closed__20;
x_122 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_122, 0, x_89);
lean_ctor_set(x_122, 1, x_121);
x_123 = 0;
x_124 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_122, x_123, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_124;
}
}
case 7:
{
uint8_t x_125; 
lean_dec(x_90);
lean_free_object(x_61);
x_125 = !lean_is_exclusive(x_91);
if (x_125 == 0)
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; lean_object* x_130; 
x_126 = lean_ctor_get(x_91, 1);
lean_dec(x_126);
x_127 = lean_ctor_get(x_91, 0);
lean_dec(x_127);
x_128 = l_Lean_Meta_reportDiag___closed__20;
lean_ctor_set(x_91, 1, x_128);
lean_ctor_set(x_91, 0, x_89);
x_129 = 0;
x_130 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_91, x_129, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_130;
}
else
{
lean_object* x_131; lean_object* x_132; uint8_t x_133; lean_object* x_134; 
lean_dec(x_91);
x_131 = l_Lean_Meta_reportDiag___closed__20;
x_132 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_132, 0, x_89);
lean_ctor_set(x_132, 1, x_131);
x_133 = 0;
x_134 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_132, x_133, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_134;
}
}
default: 
{
uint8_t x_135; 
lean_dec(x_91);
lean_free_object(x_61);
x_135 = !lean_is_exclusive(x_90);
if (x_135 == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; uint8_t x_139; lean_object* x_140; 
x_136 = lean_ctor_get(x_90, 1);
lean_dec(x_136);
x_137 = lean_ctor_get(x_90, 0);
lean_dec(x_137);
x_138 = l_Lean_Meta_reportDiag___closed__20;
lean_ctor_set_tag(x_90, 7);
lean_ctor_set(x_90, 1, x_138);
lean_ctor_set(x_90, 0, x_89);
x_139 = 0;
x_140 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_90, x_139, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_140;
}
else
{
lean_object* x_141; lean_object* x_142; uint8_t x_143; lean_object* x_144; 
lean_dec(x_90);
x_141 = l_Lean_Meta_reportDiag___closed__20;
x_142 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_142, 0, x_89);
lean_ctor_set(x_142, 1, x_141);
x_143 = 0;
x_144 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_142, x_143, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_144;
}
}
}
}
else
{
lean_object* x_145; uint8_t x_146; lean_object* x_147; 
lean_free_object(x_61);
x_145 = l_Lean_Meta_reportDiag___closed__20;
lean_ctor_set_tag(x_52, 7);
lean_ctor_set(x_52, 1, x_145);
lean_ctor_set(x_52, 0, x_89);
x_146 = 0;
x_147 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_52, x_146, x_1, x_2, x_3, x_4, x_64);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_147;
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; 
x_148 = lean_ctor_get(x_61, 0);
x_149 = lean_ctor_get(x_61, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_61);
x_150 = l_Lean_MessageData_nil;
x_151 = l_Lean_Meta_reportDiag___closed__3;
x_152 = l_Lean_Meta_reportDiag___closed__4;
x_153 = l_Lean_Meta_appendSection(x_150, x_151, x_152, x_23, x_25);
x_154 = l_Lean_Meta_reportDiag___closed__5;
x_155 = l_Lean_Meta_appendSection(x_153, x_151, x_154, x_27, x_25);
x_156 = l_Lean_Meta_reportDiag___closed__6;
x_157 = l_Lean_Meta_appendSection(x_155, x_151, x_156, x_30, x_25);
x_158 = l_Lean_Meta_reportDiag___closed__8;
x_159 = l_Lean_Meta_reportDiag___closed__9;
x_160 = l_Lean_Meta_appendSection(x_157, x_158, x_159, x_42, x_25);
x_161 = lean_ctor_get(x_3, 2);
lean_inc(x_161);
x_162 = l_Lean_Meta_reportDiag___closed__10;
x_163 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_161, x_162);
lean_dec(x_161);
x_164 = l___private_Init_Data_Repr_0__Nat_reprFast(x_163);
x_165 = l_Lean_Meta_reportDiag___closed__11;
x_166 = lean_string_append(x_165, x_164);
lean_dec(x_164);
x_167 = l_Lean_Meta_reportDiag___closed__12;
x_168 = lean_string_append(x_166, x_167);
x_169 = l_Lean_Meta_appendSection(x_160, x_158, x_168, x_50, x_21);
x_170 = l_Lean_Meta_reportDiag___closed__14;
x_171 = l_Lean_Meta_reportDiag___closed__15;
x_172 = l_Lean_Meta_appendSection(x_169, x_170, x_171, x_39, x_25);
x_173 = l_Lean_Meta_reportDiag___closed__17;
x_174 = l_Lean_Meta_appendSection(x_172, x_173, x_152, x_148, x_25);
if (lean_obj_tag(x_174) == 0)
{
lean_object* x_175; lean_object* x_176; 
lean_free_object(x_52);
x_175 = lean_ctor_get(x_174, 0);
lean_inc(x_175);
x_176 = lean_ctor_get(x_175, 0);
lean_inc(x_176);
switch (lean_obj_tag(x_176)) {
case 0:
{
lean_object* x_177; lean_object* x_178; 
x_177 = lean_ctor_get(x_175, 1);
lean_inc(x_177);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_178 = x_175;
} else {
 lean_dec_ref(x_175);
 x_178 = lean_box(0);
}
if (lean_obj_tag(x_177) == 0)
{
lean_object* x_179; lean_object* x_180; 
lean_dec(x_178);
lean_dec(x_174);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_179 = lean_box(0);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_179);
lean_ctor_set(x_180, 1, x_149);
return x_180;
}
else
{
lean_object* x_181; lean_object* x_182; uint8_t x_183; lean_object* x_184; 
lean_dec(x_177);
x_181 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_178)) {
 x_182 = lean_alloc_ctor(7, 2, 0);
} else {
 x_182 = x_178;
 lean_ctor_set_tag(x_182, 7);
}
lean_ctor_set(x_182, 0, x_174);
lean_ctor_set(x_182, 1, x_181);
x_183 = 0;
x_184 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_182, x_183, x_1, x_2, x_3, x_4, x_149);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_184;
}
}
case 4:
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; lean_object* x_189; 
lean_dec(x_175);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_185 = x_176;
} else {
 lean_dec_ref(x_176);
 x_185 = lean_box(0);
}
x_186 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_185)) {
 x_187 = lean_alloc_ctor(7, 2, 0);
} else {
 x_187 = x_185;
 lean_ctor_set_tag(x_187, 7);
}
lean_ctor_set(x_187, 0, x_174);
lean_ctor_set(x_187, 1, x_186);
x_188 = 0;
x_189 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_187, x_188, x_1, x_2, x_3, x_4, x_149);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_189;
}
case 5:
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; uint8_t x_193; lean_object* x_194; 
lean_dec(x_175);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_190 = x_176;
} else {
 lean_dec_ref(x_176);
 x_190 = lean_box(0);
}
x_191 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_190)) {
 x_192 = lean_alloc_ctor(7, 2, 0);
} else {
 x_192 = x_190;
 lean_ctor_set_tag(x_192, 7);
}
lean_ctor_set(x_192, 0, x_174);
lean_ctor_set(x_192, 1, x_191);
x_193 = 0;
x_194 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_192, x_193, x_1, x_2, x_3, x_4, x_149);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_194;
}
case 7:
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; 
lean_dec(x_175);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_195 = x_176;
} else {
 lean_dec_ref(x_176);
 x_195 = lean_box(0);
}
x_196 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_195)) {
 x_197 = lean_alloc_ctor(7, 2, 0);
} else {
 x_197 = x_195;
}
lean_ctor_set(x_197, 0, x_174);
lean_ctor_set(x_197, 1, x_196);
x_198 = 0;
x_199 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_197, x_198, x_1, x_2, x_3, x_4, x_149);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_199;
}
default: 
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; uint8_t x_203; lean_object* x_204; 
lean_dec(x_176);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_200 = x_175;
} else {
 lean_dec_ref(x_175);
 x_200 = lean_box(0);
}
x_201 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_200)) {
 x_202 = lean_alloc_ctor(7, 2, 0);
} else {
 x_202 = x_200;
 lean_ctor_set_tag(x_202, 7);
}
lean_ctor_set(x_202, 0, x_174);
lean_ctor_set(x_202, 1, x_201);
x_203 = 0;
x_204 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_202, x_203, x_1, x_2, x_3, x_4, x_149);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_204;
}
}
}
else
{
lean_object* x_205; uint8_t x_206; lean_object* x_207; 
x_205 = l_Lean_Meta_reportDiag___closed__20;
lean_ctor_set_tag(x_52, 7);
lean_ctor_set(x_52, 1, x_205);
lean_ctor_set(x_52, 0, x_174);
x_206 = 0;
x_207 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_52, x_206, x_1, x_2, x_3, x_4, x_149);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_207;
}
}
}
else
{
uint8_t x_208; 
lean_free_object(x_52);
lean_dec(x_50);
lean_dec(x_42);
lean_dec(x_39);
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_208 = !lean_is_exclusive(x_61);
if (x_208 == 0)
{
return x_61;
}
else
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; 
x_209 = lean_ctor_get(x_61, 0);
x_210 = lean_ctor_get(x_61, 1);
lean_inc(x_210);
lean_inc(x_209);
lean_dec(x_61);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_209);
lean_ctor_set(x_211, 1, x_210);
return x_211;
}
}
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_212 = lean_ctor_get(x_52, 0);
x_213 = lean_ctor_get(x_52, 1);
lean_inc(x_213);
lean_inc(x_212);
lean_dec(x_52);
x_214 = lean_ctor_get(x_212, 0);
lean_inc(x_214);
lean_dec(x_212);
x_215 = l_Lean_Kernel_instInhabitedDiagnostics;
x_216 = l_Lean_Meta_reportDiag___closed__1;
x_217 = l_Lean_EnvExtension_getState___rarg(x_215, x_216, x_214);
lean_dec(x_214);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
lean_dec(x_217);
x_219 = l_Lean_Meta_mkDiagSummary(x_218, x_37, x_1, x_2, x_3, x_4, x_213);
if (lean_obj_tag(x_219) == 0)
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_220 = lean_ctor_get(x_219, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_219, 1);
lean_inc(x_221);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 x_222 = x_219;
} else {
 lean_dec_ref(x_219);
 x_222 = lean_box(0);
}
x_223 = l_Lean_MessageData_nil;
x_224 = l_Lean_Meta_reportDiag___closed__3;
x_225 = l_Lean_Meta_reportDiag___closed__4;
x_226 = l_Lean_Meta_appendSection(x_223, x_224, x_225, x_23, x_25);
x_227 = l_Lean_Meta_reportDiag___closed__5;
x_228 = l_Lean_Meta_appendSection(x_226, x_224, x_227, x_27, x_25);
x_229 = l_Lean_Meta_reportDiag___closed__6;
x_230 = l_Lean_Meta_appendSection(x_228, x_224, x_229, x_30, x_25);
x_231 = l_Lean_Meta_reportDiag___closed__8;
x_232 = l_Lean_Meta_reportDiag___closed__9;
x_233 = l_Lean_Meta_appendSection(x_230, x_231, x_232, x_42, x_25);
x_234 = lean_ctor_get(x_3, 2);
lean_inc(x_234);
x_235 = l_Lean_Meta_reportDiag___closed__10;
x_236 = l_Lean_Option_get___at_Lean_profiler_threshold_getSecs___spec__1(x_234, x_235);
lean_dec(x_234);
x_237 = l___private_Init_Data_Repr_0__Nat_reprFast(x_236);
x_238 = l_Lean_Meta_reportDiag___closed__11;
x_239 = lean_string_append(x_238, x_237);
lean_dec(x_237);
x_240 = l_Lean_Meta_reportDiag___closed__12;
x_241 = lean_string_append(x_239, x_240);
x_242 = l_Lean_Meta_appendSection(x_233, x_231, x_241, x_50, x_21);
x_243 = l_Lean_Meta_reportDiag___closed__14;
x_244 = l_Lean_Meta_reportDiag___closed__15;
x_245 = l_Lean_Meta_appendSection(x_242, x_243, x_244, x_39, x_25);
x_246 = l_Lean_Meta_reportDiag___closed__17;
x_247 = l_Lean_Meta_appendSection(x_245, x_246, x_225, x_220, x_25);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; 
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_248, 0);
lean_inc(x_249);
switch (lean_obj_tag(x_249)) {
case 0:
{
lean_object* x_250; lean_object* x_251; 
x_250 = lean_ctor_get(x_248, 1);
lean_inc(x_250);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 lean_ctor_release(x_248, 1);
 x_251 = x_248;
} else {
 lean_dec_ref(x_248);
 x_251 = lean_box(0);
}
if (lean_obj_tag(x_250) == 0)
{
lean_object* x_252; lean_object* x_253; 
lean_dec(x_251);
lean_dec(x_247);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_252 = lean_box(0);
if (lean_is_scalar(x_222)) {
 x_253 = lean_alloc_ctor(0, 2, 0);
} else {
 x_253 = x_222;
}
lean_ctor_set(x_253, 0, x_252);
lean_ctor_set(x_253, 1, x_221);
return x_253;
}
else
{
lean_object* x_254; lean_object* x_255; uint8_t x_256; lean_object* x_257; 
lean_dec(x_250);
lean_dec(x_222);
x_254 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_251)) {
 x_255 = lean_alloc_ctor(7, 2, 0);
} else {
 x_255 = x_251;
 lean_ctor_set_tag(x_255, 7);
}
lean_ctor_set(x_255, 0, x_247);
lean_ctor_set(x_255, 1, x_254);
x_256 = 0;
x_257 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_255, x_256, x_1, x_2, x_3, x_4, x_221);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_257;
}
}
case 4:
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; uint8_t x_261; lean_object* x_262; 
lean_dec(x_248);
lean_dec(x_222);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_258 = x_249;
} else {
 lean_dec_ref(x_249);
 x_258 = lean_box(0);
}
x_259 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_258)) {
 x_260 = lean_alloc_ctor(7, 2, 0);
} else {
 x_260 = x_258;
 lean_ctor_set_tag(x_260, 7);
}
lean_ctor_set(x_260, 0, x_247);
lean_ctor_set(x_260, 1, x_259);
x_261 = 0;
x_262 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_260, x_261, x_1, x_2, x_3, x_4, x_221);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_262;
}
case 5:
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; lean_object* x_267; 
lean_dec(x_248);
lean_dec(x_222);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_263 = x_249;
} else {
 lean_dec_ref(x_249);
 x_263 = lean_box(0);
}
x_264 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_263)) {
 x_265 = lean_alloc_ctor(7, 2, 0);
} else {
 x_265 = x_263;
 lean_ctor_set_tag(x_265, 7);
}
lean_ctor_set(x_265, 0, x_247);
lean_ctor_set(x_265, 1, x_264);
x_266 = 0;
x_267 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_265, x_266, x_1, x_2, x_3, x_4, x_221);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_267;
}
case 7:
{
lean_object* x_268; lean_object* x_269; lean_object* x_270; uint8_t x_271; lean_object* x_272; 
lean_dec(x_248);
lean_dec(x_222);
if (lean_is_exclusive(x_249)) {
 lean_ctor_release(x_249, 0);
 lean_ctor_release(x_249, 1);
 x_268 = x_249;
} else {
 lean_dec_ref(x_249);
 x_268 = lean_box(0);
}
x_269 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_268)) {
 x_270 = lean_alloc_ctor(7, 2, 0);
} else {
 x_270 = x_268;
}
lean_ctor_set(x_270, 0, x_247);
lean_ctor_set(x_270, 1, x_269);
x_271 = 0;
x_272 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_270, x_271, x_1, x_2, x_3, x_4, x_221);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_272;
}
default: 
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; lean_object* x_277; 
lean_dec(x_249);
lean_dec(x_222);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 lean_ctor_release(x_248, 1);
 x_273 = x_248;
} else {
 lean_dec_ref(x_248);
 x_273 = lean_box(0);
}
x_274 = l_Lean_Meta_reportDiag___closed__20;
if (lean_is_scalar(x_273)) {
 x_275 = lean_alloc_ctor(7, 2, 0);
} else {
 x_275 = x_273;
 lean_ctor_set_tag(x_275, 7);
}
lean_ctor_set(x_275, 0, x_247);
lean_ctor_set(x_275, 1, x_274);
x_276 = 0;
x_277 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_275, x_276, x_1, x_2, x_3, x_4, x_221);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_277;
}
}
}
else
{
lean_object* x_278; lean_object* x_279; uint8_t x_280; lean_object* x_281; 
lean_dec(x_222);
x_278 = l_Lean_Meta_reportDiag___closed__20;
x_279 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_279, 0, x_247);
lean_ctor_set(x_279, 1, x_278);
x_280 = 0;
x_281 = l_Lean_log___at___private_Lean_Meta_Instances_0__Lean_Meta_computeSynthOrder___spec__5(x_279, x_280, x_1, x_2, x_3, x_4, x_221);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_281;
}
}
else
{
lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_50);
lean_dec(x_42);
lean_dec(x_39);
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_282 = lean_ctor_get(x_219, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_219, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_219)) {
 lean_ctor_release(x_219, 0);
 lean_ctor_release(x_219, 1);
 x_284 = x_219;
} else {
 lean_dec_ref(x_219);
 x_284 = lean_box(0);
}
if (lean_is_scalar(x_284)) {
 x_285 = lean_alloc_ctor(1, 2, 0);
} else {
 x_285 = x_284;
}
lean_ctor_set(x_285, 0, x_282);
lean_ctor_set(x_285, 1, x_283);
return x_285;
}
}
}
else
{
uint8_t x_286; 
lean_dec(x_42);
lean_dec(x_39);
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_286 = !lean_is_exclusive(x_49);
if (x_286 == 0)
{
return x_49;
}
else
{
lean_object* x_287; lean_object* x_288; lean_object* x_289; 
x_287 = lean_ctor_get(x_49, 0);
x_288 = lean_ctor_get(x_49, 1);
lean_inc(x_288);
lean_inc(x_287);
lean_dec(x_49);
x_289 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_289, 0, x_287);
lean_ctor_set(x_289, 1, x_288);
return x_289;
}
}
}
else
{
uint8_t x_290; 
lean_dec(x_39);
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_290 = !lean_is_exclusive(x_41);
if (x_290 == 0)
{
return x_41;
}
else
{
lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_291 = lean_ctor_get(x_41, 0);
x_292 = lean_ctor_get(x_41, 1);
lean_inc(x_292);
lean_inc(x_291);
lean_dec(x_41);
x_293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_293, 0, x_291);
lean_ctor_set(x_293, 1, x_292);
return x_293;
}
}
}
else
{
uint8_t x_294; 
lean_dec(x_30);
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_294 = !lean_is_exclusive(x_38);
if (x_294 == 0)
{
return x_38;
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; 
x_295 = lean_ctor_get(x_38, 0);
x_296 = lean_ctor_get(x_38, 1);
lean_inc(x_296);
lean_inc(x_295);
lean_dec(x_38);
x_297 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_297, 0, x_295);
lean_ctor_set(x_297, 1, x_296);
return x_297;
}
}
}
else
{
uint8_t x_298; 
lean_dec(x_27);
lean_dec(x_23);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_298 = !lean_is_exclusive(x_29);
if (x_298 == 0)
{
return x_29;
}
else
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; 
x_299 = lean_ctor_get(x_29, 0);
x_300 = lean_ctor_get(x_29, 1);
lean_inc(x_300);
lean_inc(x_299);
lean_dec(x_29);
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_299);
lean_ctor_set(x_301, 1, x_300);
return x_301;
}
}
}
else
{
uint8_t x_302; 
lean_dec(x_23);
lean_dec(x_20);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_302 = !lean_is_exclusive(x_26);
if (x_302 == 0)
{
return x_26;
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; 
x_303 = lean_ctor_get(x_26, 0);
x_304 = lean_ctor_get(x_26, 1);
lean_inc(x_304);
lean_inc(x_303);
lean_dec(x_26);
x_305 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_305, 0, x_303);
lean_ctor_set(x_305, 1, x_304);
return x_305;
}
}
}
else
{
uint8_t x_306; 
lean_dec(x_20);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_306 = !lean_is_exclusive(x_22);
if (x_306 == 0)
{
return x_22;
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_307 = lean_ctor_get(x_22, 0);
x_308 = lean_ctor_get(x_22, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_22);
x_309 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_309, 0, x_307);
lean_ctor_set(x_309, 1, x_308);
return x_309;
}
}
}
}
}
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Instances(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Diagnostics(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Instances(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_collectAboveThreshold___rarg___closed__1 = _init_l_Lean_Meta_collectAboveThreshold___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_collectAboveThreshold___rarg___closed__1);
l_Lean_Meta_subCounters___rarg___closed__1 = _init_l_Lean_Meta_subCounters___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_subCounters___rarg___closed__1);
l_Lean_Meta_subCounters___rarg___closed__2 = _init_l_Lean_Meta_subCounters___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_subCounters___rarg___closed__2);
l_Lean_Meta_DiagSummary_data___default = _init_l_Lean_Meta_DiagSummary_data___default();
lean_mark_persistent(l_Lean_Meta_DiagSummary_data___default);
l_Lean_Meta_DiagSummary_max___default = _init_l_Lean_Meta_DiagSummary_max___default();
lean_mark_persistent(l_Lean_Meta_DiagSummary_max___default);
l_Lean_Meta_instInhabitedDiagSummary___closed__1 = _init_l_Lean_Meta_instInhabitedDiagSummary___closed__1();
lean_mark_persistent(l_Lean_Meta_instInhabitedDiagSummary___closed__1);
l_Lean_Meta_instInhabitedDiagSummary = _init_l_Lean_Meta_instInhabitedDiagSummary();
lean_mark_persistent(l_Lean_Meta_instInhabitedDiagSummary);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__7 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__7();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__7);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__8);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__9 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__9();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__9);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__10 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__10();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__10);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__11 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__11();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__11);
l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_mkDiagSummary___spec__8___closed__12);
l_Lean_Meta_mkDiagSummary___closed__1 = _init_l_Lean_Meta_mkDiagSummary___closed__1();
lean_mark_persistent(l_Lean_Meta_mkDiagSummary___closed__1);
l_Lean_Meta_mkDiagSummary___closed__2 = _init_l_Lean_Meta_mkDiagSummary___closed__2();
lean_mark_persistent(l_Lean_Meta_mkDiagSummary___closed__2);
l_Lean_Meta_mkDiagSummary___closed__3 = _init_l_Lean_Meta_mkDiagSummary___closed__3();
lean_mark_persistent(l_Lean_Meta_mkDiagSummary___closed__3);
l_Lean_Meta_mkDiagSummaryForUsedInstances___closed__1 = _init_l_Lean_Meta_mkDiagSummaryForUsedInstances___closed__1();
lean_mark_persistent(l_Lean_Meta_mkDiagSummaryForUsedInstances___closed__1);
l_Lean_Meta_mkDiagSynthPendingFailure___closed__1 = _init_l_Lean_Meta_mkDiagSynthPendingFailure___closed__1();
lean_mark_persistent(l_Lean_Meta_mkDiagSynthPendingFailure___closed__1);
l_Lean_Meta_appendSection___closed__1 = _init_l_Lean_Meta_appendSection___closed__1();
l_Lean_Meta_appendSection___closed__2 = _init_l_Lean_Meta_appendSection___closed__2();
lean_mark_persistent(l_Lean_Meta_appendSection___closed__2);
l_Lean_Meta_appendSection___closed__3 = _init_l_Lean_Meta_appendSection___closed__3();
lean_mark_persistent(l_Lean_Meta_appendSection___closed__3);
l_Lean_Meta_appendSection___closed__4 = _init_l_Lean_Meta_appendSection___closed__4();
lean_mark_persistent(l_Lean_Meta_appendSection___closed__4);
l_Lean_Meta_reportDiag___closed__1 = _init_l_Lean_Meta_reportDiag___closed__1();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__1);
l_Lean_Meta_reportDiag___closed__2 = _init_l_Lean_Meta_reportDiag___closed__2();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__2);
l_Lean_Meta_reportDiag___closed__3 = _init_l_Lean_Meta_reportDiag___closed__3();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__3);
l_Lean_Meta_reportDiag___closed__4 = _init_l_Lean_Meta_reportDiag___closed__4();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__4);
l_Lean_Meta_reportDiag___closed__5 = _init_l_Lean_Meta_reportDiag___closed__5();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__5);
l_Lean_Meta_reportDiag___closed__6 = _init_l_Lean_Meta_reportDiag___closed__6();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__6);
l_Lean_Meta_reportDiag___closed__7 = _init_l_Lean_Meta_reportDiag___closed__7();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__7);
l_Lean_Meta_reportDiag___closed__8 = _init_l_Lean_Meta_reportDiag___closed__8();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__8);
l_Lean_Meta_reportDiag___closed__9 = _init_l_Lean_Meta_reportDiag___closed__9();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__9);
l_Lean_Meta_reportDiag___closed__10 = _init_l_Lean_Meta_reportDiag___closed__10();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__10);
l_Lean_Meta_reportDiag___closed__11 = _init_l_Lean_Meta_reportDiag___closed__11();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__11);
l_Lean_Meta_reportDiag___closed__12 = _init_l_Lean_Meta_reportDiag___closed__12();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__12);
l_Lean_Meta_reportDiag___closed__13 = _init_l_Lean_Meta_reportDiag___closed__13();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__13);
l_Lean_Meta_reportDiag___closed__14 = _init_l_Lean_Meta_reportDiag___closed__14();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__14);
l_Lean_Meta_reportDiag___closed__15 = _init_l_Lean_Meta_reportDiag___closed__15();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__15);
l_Lean_Meta_reportDiag___closed__16 = _init_l_Lean_Meta_reportDiag___closed__16();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__16);
l_Lean_Meta_reportDiag___closed__17 = _init_l_Lean_Meta_reportDiag___closed__17();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__17);
l_Lean_Meta_reportDiag___closed__18 = _init_l_Lean_Meta_reportDiag___closed__18();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__18);
l_Lean_Meta_reportDiag___closed__19 = _init_l_Lean_Meta_reportDiag___closed__19();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__19);
l_Lean_Meta_reportDiag___closed__20 = _init_l_Lean_Meta_reportDiag___closed__20();
lean_mark_persistent(l_Lean_Meta_reportDiag___closed__20);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
