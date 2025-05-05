@interface BDXBridgeAppSaveDataURLMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString dataURL;
@property (nonatomic) NSString filename;
@property (nonatomic) NSString extension;
@property (nonatomic) NSString saveToAlbum;
- (void)setSaveToAlbum:;
- (id)saveToAlbum;
- (id)filename;
- (void)setExtension:;
- (id)extension;
- (void)setFilename:;
- (void).cxx_destruct;
- (id)dataURL;
- (void)setDataURL:;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
