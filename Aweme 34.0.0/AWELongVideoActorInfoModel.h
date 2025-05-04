@interface AWELongVideoActorInfoModel : MTLModel
@property (nonatomic) AWEURLModel avatar;
@property (nonatomic) NSString name;
@property (nonatomic) NSString role;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)role;
- (void)setRole:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)avatar;
- (void)setAvatar:;
+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
