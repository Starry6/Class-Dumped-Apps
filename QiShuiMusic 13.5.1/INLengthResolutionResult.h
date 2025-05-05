@interface INLengthResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedLength:;
+ (id)disambiguationWithLengthsToDisambiguate:;
+ (id)confirmationRequiredWithLengthToConfirm:;
@end
