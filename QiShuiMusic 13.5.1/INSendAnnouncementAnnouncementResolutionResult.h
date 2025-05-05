@interface INSendAnnouncementAnnouncementResolutionResult : INAnnouncementResolutionResult
- (id)_initWithIntentSlotResolutionResult:slotDescription:;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:;
- (id)initWithAnnouncementResolutionResult:;
+ (id)unsupportedForReason:;
+ (id)confirmationRequiredWithAnnouncementToConfirm:forReason:;
@end
