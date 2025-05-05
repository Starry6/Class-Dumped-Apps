@interface HTSLiveEffectTTNetDownloader : NSObject
@property (nonatomic) IESLiveEffectDownloadTrackHandler trackHandler;
@property (nonatomic) BOOL enableSpeedLimit;
@property (nonatomic) q throttleNetSpeed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)downloadCacheURLWithAssetId:;
- (void)downloadGiftWithURL:assetId:fileUniqId:progress:completed:;
- (BOOL)enableSpeedLimit;
- (void)setEnableSpeedLimit:;
- (void)setThrottleNetSpeed:;
- (void)setTrackHandler:;
- (long long)throttleNetSpeed;
- (id)trackHandler;
- (void).cxx_destruct;
@end
