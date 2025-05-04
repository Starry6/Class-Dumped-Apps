@interface AWEIMRandomInteractiveEmojiInfo : MTLModel
@property (nonatomic) q imageId;
@property (nonatomic) AWEURLModel imageUrl;
@property (nonatomic) NSString imageType;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithResponse:displayName:;
- (id)displayName;
- (void)setImageType:;
- (void)setDisplayName:;
- (void)setImageId:;
- (void).cxx_destruct;
- (long long)imageId;
- (id)imageType;
- (id)imageUrl;
- (void)setImageUrl:;
+ (id)imageUrlJSONTransformer;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
