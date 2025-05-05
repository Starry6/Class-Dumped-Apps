@interface BDXBridgeChooseAndUploadTempFiles : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString path;
@property (nonatomic) NSNumber size;
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString base64Data;
@property (nonatomic) q mediaType;
- (id)base64Data;
- (void)setBase64Data:;
- (long long)mediaType;
- (id)path;
- (void)setMediaType:;
- (id)url;
- (void)setPath:;
- (void)setUrl:;
- (id)mimeType;
- (void).cxx_destruct;
- (void)setMimeType:;
- (void)setSize:;
- (id)size;
+ (id)mediaTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
