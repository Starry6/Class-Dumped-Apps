@interface AWEIMGroupInteractiveChecker : NSObject
+ (unsigned long long)checkForbidInteractiveWithChatModel:;
+ (unsigned long long)checkForbidInteractiveWithConversation:;
+ (void)showDefaultToastWithReason:;
@end
