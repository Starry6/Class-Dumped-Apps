@interface BDXBridgeDownloadFileMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString url;
@property (nonatomic) NSString extension;
@property (nonatomic) NSDictionary header;
@property (nonatomic) NSDictionary params;
@property (nonatomic) BOOL needCommonParams;
@property (nonatomic) NSString saveToAlbum;
- (void)setSaveToAlbum:;
- (BOOL)needCommonParams;
- (id)saveToAlbum;
- (void)setNeedCommonParams:;
- (void)setHeader:;
- (id)url;
- (void)setExtension:;
- (id)extension;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)header;
- (id)params;
- (void)setParams:;
+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
