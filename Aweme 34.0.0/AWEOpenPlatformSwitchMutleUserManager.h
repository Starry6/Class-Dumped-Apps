@interface AWEOpenPlatformSwitchMutleUserManager : NSObject
@property (nonatomic) NSArray userList;
- (id)userList;
- (void)setUserList:;
- (BOOL)shouldShowEntranceLabel;
- (BOOL)shouldShowHalfSwitchVC;
- (void)loginNewUser:;
- (void)trackAuthSwitchNotify;
- (void)trackAuthSwitchClick:;
- (void)switchToUser:withCompletionBlk:;
- (void)getCurrentUserListWithBlock:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareManager;
@end
