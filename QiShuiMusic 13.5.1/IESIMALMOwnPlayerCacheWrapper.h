@interface IESIMALMOwnPlayerCacheWrapper : NSObject
@property (nonatomic) @? speedTestBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clearAllCache;
- (void)getCacheFileByKey:completionBlock:;
- (double)getCacheForSizeKey:;
- (void)getCacheSizeWithCompletion:;
- (void)hasCacheForVideoID:URLString:completion:;
- (BOOL)hasEnoughCacheForURLString:videoDuration:networkSpeed:;
- (void)setCacheSizeLimit:;
- (void)setSpeedTestBlock:;
- (void)setVideoDownloadSpeedTestAction:;
- (id)speedTestBlock;
- (void)speedWithDataLength:interval:;
- (void).cxx_destruct;
+ (id)sharedCache;
@end
