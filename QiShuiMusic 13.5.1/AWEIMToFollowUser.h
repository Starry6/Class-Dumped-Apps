@interface AWEIMToFollowUser : MTLModel
@property (nonatomic) NSString userID;
@property (nonatomic) IESIMURLModel avatar;
@property (nonatomic) NSString nickname;
@property (nonatomic) BOOL isGroupOwner;
@property (nonatomic) NSString secUid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isGroupOwner;
- (id)secUid;
- (void)setIsGroupOwner:;
- (void)setSecUid:;
- (id)userID;
- (id)nickname;
- (void).cxx_destruct;
- (void)setNickname:;
- (void)setUserID:;
- (id)avatar;
- (void)setAvatar:;
+ (id)JSONKeyPathsByPropertyKey;
@end
