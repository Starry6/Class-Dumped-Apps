@interface INPlacemarkResolutionResult : INIntentResolutionResult
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)unsupportedWithReason:alternativePlacemarks:;
+ (id)successWithResolvedPlacemark:;
+ (id)disambiguationWithPlacemarksToDisambiguate:;
+ (id)confirmationRequiredWithPlacemarkToConfirm:;
@end
