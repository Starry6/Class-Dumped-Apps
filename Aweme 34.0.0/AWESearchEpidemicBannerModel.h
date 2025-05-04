@interface AWESearchEpidemicBannerModel : AWEBaseApiModel
@property (nonatomic) NSString imageURL;
@property (nonatomic) NSString backgroundColorString;
@property (nonatomic) NSString schemaURL;
- (void)setSchemaURL:;
- (id)schemaURL;
- (id)backgroundColorString;
- (void)setBackgroundColorString:;
- (id)imageURL;
- (void).cxx_destruct;
- (void)setImageURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
