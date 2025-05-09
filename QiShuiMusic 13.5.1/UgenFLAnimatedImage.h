@interface UgenFLAnimatedImage : NSObject
@property (nonatomic) Q frameCacheSizeOptimal;
@property (nonatomic) BOOL predrawingEnabled;
@property (nonatomic) Q frameCacheSizeMaxInternal;
@property (nonatomic) Q requestedFrameIndex;
@property (nonatomic) Q posterImageFrameIndex;
@property (nonatomic) NSMutableDictionary cachedFramesForIndexes;
@property (nonatomic) NSMutableIndexSet cachedFrameIndexes;
@property (nonatomic) NSMutableIndexSet requestedFrameIndexes;
@property (nonatomic) NSIndexSet allFramesIndexSet;
@property (nonatomic) Q memoryWarningCount;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) ^{CGImageSource=} imageSource;
@property (nonatomic) UgenFLAnimatedImage weakProxy;
@property (nonatomic) UIImage posterImage;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) Q loopCount;
@property (nonatomic) NSDictionary delayTimesForIndexes;
@property (nonatomic) Q frameCount;
@property (nonatomic) Q frameCacheSizeCurrent;
@property (nonatomic) Q frameCacheSizeMax;
@property (nonatomic) NSData data;
- (void)addFrameIndexesToCache:;
- (id)allFramesIndexSet;
- (id)cachedFrameIndexes;
- (id)cachedFramesForIndexes;
- (id)delayTimesForIndexes;
- (unsigned long long)frameCacheSizeCurrent;
- (unsigned long long)frameCacheSizeMax;
- (unsigned long long)frameCacheSizeMaxInternal;
- (unsigned long long)frameCacheSizeOptimal;
- (id)frameIndexesToCache;
- (void)growFrameCacheSizeAfterMemoryWarning:;
- (id)imageLazilyCachedAtIndex:;
- (id)initWithAnimatedGIFData:;
- (id)initWithAnimatedGIFData:optimalFrameCacheSize:predrawingEnabled:;
- (BOOL)isPredrawingEnabled;
- (unsigned long long)memoryWarningCount;
- (unsigned long long)posterImageFrameIndex;
- (void)purgeFrameCacheIfNeeded;
- (unsigned long long)requestedFrameIndex;
- (id)requestedFrameIndexes;
- (void)resetFrameCacheSizeMaxInternal;
- (void)setFrameCacheSizeMax:;
- (void)setFrameCacheSizeMaxInternal:;
- (void)setMemoryWarningCount:;
- (void)setRequestedFrameIndex:;
- (id)weakProxy;
- (unsigned long long)frameCount;
- (id)init;
- (void)dealloc;
- (id)data;
- (void)didReceiveMemoryWarning:;
- (id)posterImage;
- (id)serialQueue;
- (void).cxx_destruct;
- (id)description;
- (id)imageSource;
- (id)size;
- (id)imageAtIndex:;
- (unsigned long long)loopCount;
+ (id)animatedImageWithGIFData:;
+ (void)logStringFromBlock:withLevel:;
+ (id)predrawnImageFromImage:;
+ (void)setLogBlock:logLevel:;
+ (id)sizeForImage:;
@end
