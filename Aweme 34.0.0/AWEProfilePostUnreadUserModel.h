@interface AWEProfilePostUnreadUserModel : MTLModel
@property (nonatomic) NSString userID;
@property (nonatomic) AWEURLModel avatarURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarURL;
- (void)setAvatarURL:;
- (id)userID;
- (void).cxx_destruct;
- (void)setUserID:;
+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
