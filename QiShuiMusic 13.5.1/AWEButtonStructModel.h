@interface AWEButtonStructModel : IESIMBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) IESIMURLModel imageURI;
@property (nonatomic) IESIMURLModel imageURILight;
@property (nonatomic) NSString reqValue;
- (id)imageURILight;
- (id)reqValue;
- (void)setImageURILight:;
- (void)setReqValue:;
- (void)setName:;
- (void).cxx_destruct;
- (id)name;
- (id)imageURI;
- (void)setImageURI:;
+ (id)imageURIJSONTransformer;
+ (id)imageURILightJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
