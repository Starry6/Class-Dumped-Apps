@interface INFileResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedFile:;
+ (id)disambiguationWithFilesToDisambiguate:;
+ (id)confirmationRequiredWithFileToConfirm:;
@end
