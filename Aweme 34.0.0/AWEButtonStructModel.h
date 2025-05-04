@interface AWEButtonStructModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) IESIMURLModel imageURI;
@property (nonatomic) IESIMURLModel imageURILight;
@property (nonatomic) NSString reqValue;
- (id)imageURILight;
- (void)setImageURILight:;
- (id)reqValue;
- (void)setReqValue:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)imageURI;
- (void)setImageURI:;
+ (id)imageURILightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imageURIJSONTransformer;
@end
