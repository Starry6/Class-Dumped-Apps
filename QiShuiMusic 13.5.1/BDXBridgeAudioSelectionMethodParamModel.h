@interface BDXBridgeAudioSelectionMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString maxFileSize;
@property (nonatomic) NSArray fileType;
@property (nonatomic) BDXBridgeAudioSelectionServerRequest serverRequest;
- (id)maxFileSize;
- (void)setFileType:;
- (id)fileType;
- (void).cxx_destruct;
- (void)setMaxFileSize:;
- (id)serverRequest;
- (void)setServerRequest:;
+ (id)requiredKeyPaths;
+ (id)serverRequestJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
