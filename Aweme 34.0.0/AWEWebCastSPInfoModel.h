@interface AWEWebCastSPInfoModel : MTLModel
@property (nonatomic) NSString imName;
@property (nonatomic) AWEURLModel imAvatar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imName;
- (id)imAvatar;
- (void)setImName:;
- (void)setImAvatar:;
- (void).cxx_destruct;
+ (id)imAvatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
