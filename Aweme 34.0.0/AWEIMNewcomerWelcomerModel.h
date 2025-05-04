@interface AWEIMNewcomerWelcomerModel : MTLModel
@property (nonatomic) NSNumber uid;
@property (nonatomic) NSString secUid;
@property (nonatomic) NSString nickname;
@property (nonatomic) AWEURLModel avatarUrl;
@property (nonatomic) NSArray tags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUid;
- (void)setAvatarUrl:;
- (id)avatarUrl;
- (void)setSecUid:;
- (id)initWithUserModel:conversation:;
- (id)nickname;
- (void)setUid:;
- (id)tags;
- (id)uid;
- (void)setTags:;
- (void).cxx_destruct;
- (void)setNickname:;
+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
