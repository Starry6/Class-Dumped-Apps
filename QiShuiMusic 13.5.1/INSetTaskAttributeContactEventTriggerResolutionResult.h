@interface INSetTaskAttributeContactEventTriggerResolutionResult : INContactEventTriggerResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithContactEventTriggerResolutionResult:;
+ (id)unsupportedForReason:;
@end
