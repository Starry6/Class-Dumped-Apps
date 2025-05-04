@interface AWEIMPasteImageUtility : NSObject
+ (BOOL)canShowAlertWithConversation:;
+ (void)showAlertWithConversation:;
+ (void)modifyTextView:;
+ (BOOL)p_checkPasteBoardImage;
+ (BOOL)checkDataOversize:;
+ (id)p_getAlertHeaderImage:;
@end
