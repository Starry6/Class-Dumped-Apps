@interface INAddMediaMediaDestinationResolutionResult : INMediaDestinationResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithMediaDestinationResolutionResult:;
+ (id)unsupportedForReason:;
@end
