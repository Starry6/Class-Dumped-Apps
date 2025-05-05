@interface IESECShopOwner : NSObject
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserId;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSArray avatars;
@property (nonatomic) q followStatus;
- (id)avatars;
- (long long)followStatus;
- (id)secUserId;
- (void)setAvatars:;
- (void)setFollowStatus:;
- (void)setSecUserId:;
- (id)userID;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
@end
