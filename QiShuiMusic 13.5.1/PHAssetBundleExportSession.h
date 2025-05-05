@interface PHAssetBundleExportSession : NSObject
@property (nonatomic) NSString sessionUUID;
@property (nonatomic) PHAsset asset;
@property (nonatomic) NSDictionary fileURLs;
@property (nonatomic) NSString customFilenameBase;
- (id)asset;
- (id)sessionUUID;
- (id)fileURLs;
- (void).cxx_destruct;
- (id)customFilenameBase;
- (void)setCustomFilenameBase:;
- (id)initWithAsset:withAssetExportRequestFileURLs:;
- (void)writeToDirectoryURL:completionHandler:;
- (id)_filenameBaseForAsset:;
- (id)_createAssetBundleFromAsset:withFileURLs:atURL:withError:;
@end
