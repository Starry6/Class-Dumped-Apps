@interface BDXBridgeChooseMediaMethodResultTempFileModel : BDXBridgeModel
@property (nonatomic) NSNumber size;
@property (nonatomic) Q mediaType;
@property (nonatomic) NSString mimeType;
@property (nonatomic) NSString base64Data;
@property (nonatomic) NSString path;
@property (nonatomic) NSArray binaryData;
@property (nonatomic) NSString tempFilePath;
@property (nonatomic) NSString url;
- (id)base64Data;
- (void)setBase64Data:;
- (void)setBinaryData:;
- (void)setTempFilePath:;
- (unsigned long long)mediaType;
- (id)path;
- (void)setMediaType:;
- (id)url;
- (void)setPath:;
- (void)setUrl:;
- (id)mimeType;
- (id)tempFilePath;
- (void).cxx_destruct;
- (void)setMimeType:;
- (void)setSize:;
- (id)size;
- (id)binaryData;
+ (id)mediaTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
