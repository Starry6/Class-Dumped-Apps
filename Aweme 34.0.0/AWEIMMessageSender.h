@interface AWEIMMessageSender : NSObject
+ (void)sendMessage:toUid:completion:;
+ (void)sendMessage:toSecUid:completion:;
@end
