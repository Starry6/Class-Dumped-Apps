@interface BDUGLuckyCatSaveMediaToPhotosAlbumXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString filePath;
@property (nonatomic) NSString targetFileName;
@property (nonatomic) BOOL cacheForShare;
- (BOOL)cacheForShare;
- (void)setCacheForShare:;
- (void)setTargetFileName:;
- (id)targetFileName;
- (id)filePath;
- (void)setFilePath:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
