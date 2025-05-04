@interface AWEVideoBackupPopupHandler : NSObject
+ (BOOL)isTeenModeEnabled;
+ (void)showAIDoingInnerNotificationWithCover:;
+ (void)showAIDoingInnerNotificationWithCover:isTemplate:;
+ (void)showAIDoneInnerNotificationWithDraft:isTemplate:title:cover:touchedHandler:completion:;
+ (void)showDialogWithDraftId:headingContent:cover:clickActionBlock:completion:;
+ (id)coverWithDraft:size:;
+ (void)showWithDraft:cover:completion:;
+ (void)trackSaveDraftEventWithDraft:params:;
+ (void)p_editActionWithDraft:completion:;
+ (void)p_saveActionWithDraft:completion:isCrash:;
+ (void)p_cancelActionWithDraft:completion:;
+ (void)p_trackPopupClickPosition:;
+ (void)showPopUpWithDraft:flowControlModelStep:completion:;
+ (void)p_enterEditPageWithDraft:completion:;
+ (BOOL)draftResourcesExist:;
@end
