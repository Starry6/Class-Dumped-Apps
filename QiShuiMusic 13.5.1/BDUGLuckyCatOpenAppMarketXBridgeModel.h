@interface BDUGLuckyCatOpenAppMarketXBridgeModel : BDXBridgeModel
@property (nonatomic) NSString pkgName;
@property (nonatomic) NSString appStoreID;
@property (nonatomic) NSNumber downloadScene;
- (id)pkgName;
- (id)downloadScene;
- (void)setDownloadScene:;
- (void)setPkgName:;
- (void).cxx_destruct;
- (id)appStoreID;
- (void)setAppStoreID:;
+ (id)JSONKeyPathsByPropertyKey;
@end
