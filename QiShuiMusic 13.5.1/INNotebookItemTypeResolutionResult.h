@interface INNotebookItemTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedNotebookItemType:;
+ (id)disambiguationWithNotebookItemTypesToDisambiguate:;
+ (id)confirmationRequiredWithNotebookItemTypeToConfirm:;
@end
