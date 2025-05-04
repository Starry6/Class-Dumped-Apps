@interface AWENaviAvatarResponseModel : MTLModel
@property (nonatomic) q code;
@property (nonatomic) NSString message;
@property (nonatomic) AWENaviAvatarModel avatar;
@property (nonatomic) NSArray others;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)code;
- (id)message;
- (void)setCode:;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)others;
- (id)avatar;
- (void)setAvatar:;
- (void)setOthers:;
+ (id)avatarJSONTransformer;
+ (id)othersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
