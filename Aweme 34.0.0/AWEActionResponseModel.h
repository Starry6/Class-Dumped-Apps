@interface AWEActionResponseModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) IESIMURLModel imageURI;
@property (nonatomic) IESIMURLModel imageURILight;
- (id)imageURILight;
- (void)setImageURILight:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)imageURI;
- (void)setImageURI:;
+ (id)imageURILightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imageURIJSONTransformer;
@end
