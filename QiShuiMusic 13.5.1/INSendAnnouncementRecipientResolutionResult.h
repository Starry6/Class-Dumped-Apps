@interface INSendAnnouncementRecipientResolutionResult : INHomeFilterResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithHomeFilterResolutionResult:;
+ (id)unsupportedForReason:;
@end
