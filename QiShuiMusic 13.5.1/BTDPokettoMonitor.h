@interface BTDPokettoMonitor : NSObject
@property (nonatomic) <BTDPokettoMonitor> monitor;
@property (nonatomic) NSString sdkVersion;
@property (nonatomic) NSString sdkAppId;
- (void)monitorWithSdkVersion:sdkAppId:;
- (BOOL)hmdTrackService:metric:category:extra:;
- (id)sdkAppId;
- (void)setSdkAppId:;
- (id)init;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (id)sdkVersion;
- (void)setSdkVersion:;
+ (id)shareInstance;
+ (id)appid;
@end
