@interface AWEShareServiceUtilsResult : NSObject
@property (nonatomic) NSURL sandboxFileURL;
@property (nonatomic) NSURL assetURL;
@property (nonatomic) NSURL alAssetURL;
- (id)alAssetURL;
- (id)sandboxFileURL;
- (void)setAlAssetURL:;
- (void)setSandboxFileURL:;
- (id)assetURL;
- (void)setAssetURL:;
- (void).cxx_destruct;
@end
