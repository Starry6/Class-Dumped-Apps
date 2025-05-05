@interface BDWebViewResourceManager : NSObject
@property (nonatomic) double lastSyncTime;
@property (nonatomic) NSString geckoAccessKey;
@property (nonatomic) BOOL isInHouse;
- (id)fetchAjaxHookJS;
- (id)bdw_hookAjaxJS;
- (void)didBecomeActiveNotification:;
- (id)fetchDetectBlankContentJS;
- (id)fetchHookConsoleLogToConfirm;
- (id)geckoAccessKey;
- (id)innerChannels;
- (BOOL)isInHouse;
- (id)nativeVideoHookJS;
- (void)setIsInHouse:;
- (void)syncAssetsIfNeed;
- (void)syncAssetsWithAccessKey:channels:completion:;
- (void)syncBDWebViewAssetsWithChannels:completion:;
- (id)vConsoleJS;
- (id)init;
- (void)dealloc;
- (double)lastSyncTime;
- (void)setLastSyncTime:;
+ (id)sharedInstance;
@end
