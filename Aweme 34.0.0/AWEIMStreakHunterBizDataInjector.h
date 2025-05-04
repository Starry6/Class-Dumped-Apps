@interface AWEIMStreakHunterBizDataInjector : NSObject
- (id)petElfInviteIMHunterClientDataWithConversation:message:;
- (id)petElfInviteIMHunterServerDataWithConversation:;
- (void)registerStreakBizDataInjection;
- (id)achievementIMHunterClientDataWithConversation:;
- (id)achievementIMHunterServerDataWithConversation:;
- (BOOL)enableAchievePreInjectWithCon:;
- (BOOL)hasSendInviteRaisePetElfWithCardInfoDict:;
- (BOOL)isValidInviteStatusWithConversation:peerUser:;
- (id)init;
+ (id)sharedInstance;
@end
