@interface AWEMusicDetailPromotionModel : MTLModel
@property (nonatomic) NSString desc;
@property (nonatomic) NSString schemaURL;
@property (nonatomic) AWEURLModel imageURL;
@property (nonatomic) AWEURLModel darkImageURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSchemaURL:;
- (id)schemaURL;
- (id)darkImageURL;
- (void)setDarkImageURL:;
- (void)setDesc:;
- (id)desc;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
+ (id)imageURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
