@interface INWellnessQuestionTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
- (void)transformResolutionResultForIntent:intentSlotDescription:withOptionsProvider:completion:;
+ (id)successWithResolvedWellnessQuestionType:;
+ (id)confirmationRequiredWithWellnessQuestionTypeToConfirm:;
@end
