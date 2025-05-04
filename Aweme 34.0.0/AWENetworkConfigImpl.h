@interface AWENetworkConfigImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)commonParams;
- (BOOL)createTempFile;
- (BOOL)inOneLoop;
- (void)checkAntiSpamStateWithError:urlString:completion:;
- (BOOL)userIsLogin;
- (double)defaultTimeoutInterval;
+ (id)commonParamsWithoutL0;
+ (id)currentUserId;
+ (id)commonParamsWithURLString:;
+ (BOOL)optRemoveNetworkCache;
+ (BOOL)cacheMultiThreadFix;
+ (BOOL)optUselessTTMonitor;
+ (double)downloadCacheLifeTimeMax;
+ (BOOL)enableRenameForMove;
+ (BOOL)enableSyncGetAC;
+ (BOOL)jsonSerializationErrorMonitorEnable;
@end
