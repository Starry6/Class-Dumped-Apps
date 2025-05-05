@interface AWEActionResponseModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) IESIMURLModel imageURI;
@property (nonatomic) IESIMURLModel imageURILight;
- (id)imageURILight;
- (void)setImageURILight:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)imageURI;
- (void)setImageURI:;
+ (id)imageURIJSONTransformer;
+ (id)imageURILightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
