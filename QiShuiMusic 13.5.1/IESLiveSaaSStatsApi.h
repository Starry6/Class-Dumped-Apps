@interface IESLiveSaaSStatsApi : NSObject
@property (nonatomic) NSString streamUrl;
@property (nonatomic) NSString startRoomMemory;
@property (nonatomic) NSDictionary optimizeInfo;
@property (nonatomic) q statsType;
@property (nonatomic) <IESLiveMonitor> monitor;
- (id)initWithStreamUrl:startRoomMemory:streamOptimizeInfo:statsType:;
- (id)startRoomMemory;
- (id)initWithStreamUrl:startRoomMemory:statsType:;
- (id)optimizeInfo;
- (void)setOptimizeInfo:;
- (void)setStartRoomMemory:;
- (void)stats:;
- (void)statsWithInfo:;
- (long long)statsType;
- (void)setMonitor:;
- (void).cxx_destruct;
- (id)monitor;
- (void)setStatsType:;
- (id)streamUrl;
- (void)setStreamUrl:;
@end
