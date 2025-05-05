@interface IESECShopActivityMultiMarqueeModel : MTLModel
@property (nonatomic) NSString nickName;
@property (nonatomic) NSArray avatars;
@property (nonatomic) NSString text;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatars;
- (void)setAvatars:;
- (void)setText:;
- (void)setType:;
- (long long)type;
- (id)nickName;
- (void).cxx_destruct;
- (id)text;
- (void)setNickName:;
+ (id)avatarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
