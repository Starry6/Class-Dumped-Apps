@interface AWEIMToFollowUser : MTLModel
@property (nonatomic) NSString userID;
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) NSString nickname;
@property (nonatomic) BOOL isGroupOwner;
@property (nonatomic) NSString secUid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setSecUid:;
- (BOOL)isGroupOwner;
- (void)setIsGroupOwner:;
- (id)nickname;
- (id)userID;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
