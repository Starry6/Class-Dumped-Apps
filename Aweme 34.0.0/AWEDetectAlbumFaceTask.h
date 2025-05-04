@interface AWEDetectAlbumFaceTask : NSOperation
@property (nonatomic) PHFetchResult fetchResult;
@property (nonatomic) Q maxAssetCount;
@property (nonatomic) Q detectedCount;
@property (nonatomic) @? didUpdatedBlock;
@property (nonatomic) @? assetFilterBlock;
- (unsigned long long)maxAssetCount;
- (void)setMaxAssetCount:;
- (void)setAssetFilterBlock:;
- (id)assetFilterBlock;
- (void)setDidUpdatedBlock:;
- (unsigned long long)detectedCount;
- (void)setDetectedCount:;
- (id)didUpdatedBlock;
- (id)initWithFetchResult:maxAssetCount:;
- (void)main;
- (id)fetchResult;
- (void).cxx_destruct;
- (void)setFetchResult:;
+ (id)dispatchQueue;
@end
