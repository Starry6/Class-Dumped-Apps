@interface AWETheaterThemeConfig : MTLModel
@property (nonatomic) NSString backgroundColorHexString;
@property (nonatomic) NSString schema;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (void)setCover:;
- (id)backgroundColorHexString;
- (void)setBackgroundColorHexString:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
