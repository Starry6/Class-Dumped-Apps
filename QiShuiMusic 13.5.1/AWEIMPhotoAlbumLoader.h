@interface AWEIMPhotoAlbumLoader : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSArray identifiers;
@property (nonatomic) NSMutableDictionary loadStatusObjs;
@property (nonatomic) q iCloudAssetCount;
@property (nonatomic) @? completionBlock;
- (BOOL)allTaskFinished;
- (void)__trackICloudLoadWithAssetType:;
- (void)checkAllFinished;
- (void)handleRequestResultImageData:info:assetIdentifier:;
- (void)handleRequestResultURLAsset:info:asset:requestDate:;
- (long long)iCloudAssetCount;
- (void)loadAssets:iCloudCallback:completion:;
- (id)loadStatusObjs;
- (void)setICloudAssetCount:;
- (void)setLoadStatusObjs:;
- (id)identifiers;
- (void)setCompletionBlock:;
- (id)date;
- (void)setIdentifiers:;
- (void).cxx_destruct;
- (void)setDate:;
- (id)completionBlock;
@end
