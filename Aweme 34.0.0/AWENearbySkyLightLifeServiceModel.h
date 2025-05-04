@interface AWENearbySkyLightLifeServiceModel : MTLModel
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) NSString title;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
