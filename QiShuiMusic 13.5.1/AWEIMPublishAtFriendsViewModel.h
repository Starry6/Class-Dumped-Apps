@interface AWEIMPublishAtFriendsViewModel : NSObject
+ (BOOL)shouldShowRecallMenuItemWithMessage:;
+ (id)supportMenuItemsWithMessage:shouldShowQuoteReplyMenuItem:shouldShowRecallMenuItem:;
@end
