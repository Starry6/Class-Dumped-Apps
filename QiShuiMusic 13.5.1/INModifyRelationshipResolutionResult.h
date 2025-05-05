@interface INModifyRelationshipResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedModifyRelationship:;
+ (id)disambiguationWithModifyRelationshipsToDisambiguate:;
+ (id)confirmationRequiredWithModifyRelationshipToConfirm:;
@end
