@interface INAppIdentifierResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedAppIdentifier:;
+ (id)disambiguationWithAppIdentifiersToDisambiguate:;
+ (id)confirmationRequiredWithAppIdentifierToConfirm:;
@end
