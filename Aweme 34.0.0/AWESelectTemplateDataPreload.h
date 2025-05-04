@interface AWESelectTemplateDataPreload : NSObject
@property (nonatomic) NSArray assetArray;
@property (nonatomic) AWESelectTemplateDataCache dataCache;
@property (nonatomic) NSOperationQueue preloadTaskQueue;
- (id)preloadTaskQueue;
- (void)cancelPreload;
- (id)assetArray;
- (void)setAssetArray:;
- (id)initWithAssetArray:dataCache:;
- (void)preloadTemplateResourceWithTemplateInfoArray:templateModelArray:isOneClickfilming:;
- (void)setPreloadTaskQueue:;
- (id)dataCache;
- (void).cxx_destruct;
- (void)setDataCache:;
@end
