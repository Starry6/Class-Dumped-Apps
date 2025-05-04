@interface AWEIMMessageForwardUtils : NSObject
+ (BOOL)shouldShowQuoteReplyMenuItem:conversation:;
+ (id)supportMenuItemsForMessage:conversation:;
+ (BOOL)showQuoteReplyMenuItemWithConversation:;
+ (BOOL)isSupportForwardMessage:conversation:shareModels:;
@end
