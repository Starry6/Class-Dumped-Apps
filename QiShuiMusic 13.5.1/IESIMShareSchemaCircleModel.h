@interface IESIMShareSchemaCircleModel : IESIMBaseApiModel
@property (nonatomic) NSString circleID;
@property (nonatomic) NSString circleName;
@property (nonatomic) IESIMURLModel coverURL;
- (id)circleID;
- (id)circleName;
- (void)setCircleID:;
- (void)setCircleName:;
- (void).cxx_destruct;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
