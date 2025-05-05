@interface BDXBridgeUploadImageMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString filePath;
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSArray formDataBody;
- (id)formDataBody;
- (void)setFormDataBody:;
- (id)filePath;
- (void)setHeader:;
- (id)url;
- (void)setFilePath:;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)header;
- (id)params;
- (void)setParams:;
+ (id)formDataBodyJSONTransformer;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
