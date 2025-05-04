@interface AWEVideoBackupPopup : NSObject
+ (void)p_showNewStylePopupWithCover:confirmAction:cancelAction:;
+ (void)p_showDefaultPopupWithConfirmAction:cancelAction:;
+ (void)showPopupWithDraft:confirmAction:cancelAction:;
@end
