@interface INSupportedTrafficIncidentTypeResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedSupportedTrafficIncidentType:;
+ (id)disambiguationWithSupportedTrafficIncidentTypesToDisambiguate:;
+ (id)confirmationRequiredWithSupportedTrafficIncidentTypeToConfirm:;
@end
