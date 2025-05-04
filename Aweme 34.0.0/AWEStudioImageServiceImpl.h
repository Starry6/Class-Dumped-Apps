@interface AWEStudioImageServiceImpl : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> colorQueue;
@property (nonatomic) NSMutableDictionary colorCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getColorWithImage:cacheKey:completion:;
- (id)getWebImageSizeWithType:;
- (id)getBackImageForMusicSelectVCWithBackStatus:;
- (BOOL)needShowAWEApiErrorDescriptionWithDomain:;
- (id)init;
- (void).cxx_destruct;
- (id)colorCache;
- (id)colorQueue;
- (void)setColorQueue:;
- (void)setColorCache:;
+ (id)adjustedBgColor:shouldAdjustBrightness:;
@end
