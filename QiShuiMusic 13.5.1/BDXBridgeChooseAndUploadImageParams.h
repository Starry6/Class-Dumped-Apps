@interface BDXBridgeChooseAndUploadImageParams : BDXBridgeModel
@property (nonatomic) NSString cropWidth;
@property (nonatomic) NSString cropHeight;
@property (nonatomic) NSNumber compressMaxSize;
- (id)compressMaxSize;
- (void)setCompressMaxSize:;
- (void)setCropHeight:;
- (void)setCropWidth:;
- (void).cxx_destruct;
- (id)cropWidth;
- (id)cropHeight;
+ (id)JSONKeyPathsByPropertyKey;
@end
