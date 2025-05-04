@interface AWENaviUserNode : NSObject
@property (nonatomic) NSString userId;
@property (nonatomic) NSString nickname;
@property (nonatomic) q followStatus;
@property (nonatomic) <AWENaviUserSwitcher> userSwitcher;
- (long long)followStatus;
- (void)setFollowStatus:;
- (id)userSwitcher;
- (void)setUserSwitcher:;
- (id)nickname;
- (id)userId;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setNickname:;
@end
