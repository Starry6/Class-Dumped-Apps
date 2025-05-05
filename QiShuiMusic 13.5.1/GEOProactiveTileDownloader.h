@interface GEOProactiveTileDownloader : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancel;
- (void)start;
- (void)_finish;
- (void).cxx_destruct;
- (void)_start;
- (void)_registerXPCActivity;
- (void)dataSourceDidFinish:;
- (id)initWithDelegate:delegateQueue:diskCache:tileRequesterClasses:;
- (id)initWithDelegate:delegateQueue:diskCache:tileRequesterClasses:manifestManager:requestCounter:downloaders:policyEnabledOverrides:;
- (void)_takePowerAssertionIfNecessary;
- (void)_clearPowerAssertion;
- (void)_registerXPCDeferralTimer;
- (void)_clearXPCDeferralTimer;
- (void)_xpcActivityFired;
- (void)_startNextDownloader;
- (void)_pauseIfNecessary;
+ (unsigned long long)maximumDownloadBatchSize;
+ (BOOL)_canUseXPCActivity;
+ (BOOL)shouldDownloadTileType:;
@end
