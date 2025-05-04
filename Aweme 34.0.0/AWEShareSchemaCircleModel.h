@interface AWEShareSchemaCircleModel : AWEBaseApiModel
@property (nonatomic) NSString circleID;
@property (nonatomic) NSString circleName;
@property (nonatomic) AWEURLModel coverURL;
- (id)circleID;
- (void)setCircleID:;
- (id)circleName;
- (void)setCircleName:;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
