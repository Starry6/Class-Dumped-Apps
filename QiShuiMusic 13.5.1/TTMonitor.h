@interface TTMonitor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)hmdTrackData:logTypeStr:;
- (void)hmdTrackService:attributes:;
- (void)hmdTrackService:value:extra:;
- (void)hmdTrackService:status:extra:;
- (void)trackData:logTypeStr:;
- (void)trackService:attributes:;
- (void)trackService:status:extra:;
- (void)trackService:value:extra:;
- (id)init;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (id)shareManager;
@end
