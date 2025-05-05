@interface INTemperatureResolutionResult : INIntentResolutionResult
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedTemperature:;
+ (id)disambiguationWithTemperaturesToDisambiguate:;
+ (id)confirmationRequiredWithTemperatureToConfirm:;
@end
