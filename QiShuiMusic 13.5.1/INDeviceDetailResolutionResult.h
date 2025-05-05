@interface INDeviceDetailResolutionResult : INIntentResolutionResult
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedDeviceDetail:;
+ (id)disambiguationWithDeviceDetailsToDisambiguate:;
+ (id)confirmationRequiredWithDeviceDetailToConfirm:;
@end
