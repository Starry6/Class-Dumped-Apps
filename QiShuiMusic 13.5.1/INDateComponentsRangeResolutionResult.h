@interface INDateComponentsRangeResolutionResult : INIntentResolutionResult
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)unsupportedWithReason:alternativeDateComponentsRanges:;
+ (id)successWithResolvedDateComponentsRange:;
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:;
+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:;
@end
