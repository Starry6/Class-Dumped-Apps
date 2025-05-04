@interface AWEIMConsecutiveChatDaysUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)streakRecoveryHintTextWithMessage:;
- (id)init;
+ (BOOL)isValidSpecialConsecutiveChatKey:;
+ (id)cardConfigWithLevel:isSingle:;
+ (long long)checkConsecutiveChatIsRecoveryWithConversation:peerUser:hours:;
+ (BOOL)enableConsecutiveChatDisplayWithConversation:peerUser:;
+ (BOOL)switchEnableConsecutiveChatDisplayWithConversation:;
+ (BOOL)checkConsecutiveChatWillVanishWithConversation:peerUser:hours:;
+ (id)currentStreakInfoModelWithSharedSyncedExt:;
+ (id)getConsecutiveChatFrequencyWithKey:;
+ (id)chatDaysTextFormat;
+ (id)sharedInstance;
@end
