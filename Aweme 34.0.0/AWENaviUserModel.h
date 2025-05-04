@interface AWENaviUserModel : NSObject
@property (nonatomic) BOOL selected;
@property (nonatomic) q gender;
@property (nonatomic) q followStatus;
@property (nonatomic) NSString uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSArray avatarURLs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)followStatus;
- (id)secUid;
- (void)setFollowStatus:;
- (id)avatarURLs;
- (void)setSecUid:;
- (void)setAvatarURLs:;
- (id)nickname;
- (void)setUid:;
- (id)init;
- (id)uid;
- (void)setGender:;
- (BOOL)isSelected;
- (long long)gender;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setSelected:;
@end
