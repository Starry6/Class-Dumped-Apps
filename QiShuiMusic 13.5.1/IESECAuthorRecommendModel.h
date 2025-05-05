@interface IESECAuthorRecommendModel : MTLModel
@property (nonatomic) NSString userID;
@property (nonatomic) IESECURLModel avatarImage;
@property (nonatomic) NSString userNickName;
@property (nonatomic) BOOL isFollowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFollowed;
- (void)setIsFollowed:;
- (void)setUserNickName:;
- (id)userNickName;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setAvatarImage:;
- (id)avatarImage;
+ (id)JSONKeyPathsByPropertyKey;
@end
