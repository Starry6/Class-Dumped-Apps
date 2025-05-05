@interface AWEIMChatDemoteController : NSObject
+ (BOOL)abtest_shouldDemoteUnreadCountWithChat:;
+ (BOOL)conformToDemoteUnreadCountStrategy;
+ (BOOL)isTargetChatTypeWithChat:;
+ (BOOL)shouldDemoteUnreadCountWithChat:;
+ (BOOL)shouldDemoteWithTimestamp:;
+ (void)updateDemoteTimestamp;
@end
