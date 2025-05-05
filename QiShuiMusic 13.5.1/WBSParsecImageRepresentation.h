@interface WBSParsecImageRepresentation : WBSParsecModel
@property (nonatomic) NSNumber baselineOffset;
@property (nonatomic) NSNumber roundCornerRadius;
- (id)baselineOffset;
- (id)initWithJSONObject:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)imageWithSession:;
- (id)imageWithScaleFactor:;
- (void)_fetchImageData;
- (void)_fetchImageDataUsingBlock:;
- (id)_templateImageWithImage:;
- (id)_imageWithData:;
- (id)test_data;
- (id)test_identifier;
- (id)test_imageURLString;
- (BOOL)test_isTemplate;
- (id)roundCornerRadius;
+ (id)schema;
+ (id)_bagImageDataCache;
@end
