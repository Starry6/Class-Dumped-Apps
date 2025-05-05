@interface INStringResolutionResult : INIntentResolutionResult
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_intentSlotValueForObject:slotDescription:;
- (id)_vocabularyValueForObject:slotDescription:;
+ (id)successWithResolvedString:;
+ (id)disambiguationWithStringsToDisambiguate:;
+ (id)confirmationRequiredWithStringToConfirm:;
+ (id)unsupportedWithReason:alternativeStrings:;
@end
