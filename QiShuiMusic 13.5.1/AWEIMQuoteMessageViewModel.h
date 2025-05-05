@interface AWEIMQuoteMessageViewModel : NSObject
+ (BOOL)shouldShowRecallMenuItemWithMessage:;
+ (id)supportMenuItemsWithMessage:shouldShowQuoteReplyMenuItem:shouldShowRecallMenuItem:;
@end
