@interface AWEIMGroupInteractiveChecker : NSObject
+ (unsigned long long)checkForbidInteractiveWithIESIMConversation:;
+ (unsigned long long)checkForbidInteractiveWithConversation:;
+ (void)showDefaultToastWithReason:;
+ (unsigned long long)checkForbidInteractiveWithChatModel:;
@end
