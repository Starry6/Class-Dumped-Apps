@interface AWENetworkShardContext : NSObject
@property (nonatomic) AWENetworkQualityTracker tracker;
@property (nonatomic) NSMutableArray commonParamsWithURLTiming;
@property (nonatomic) NSMutableArray commonParamsNotL0Timing;
@property (nonatomic) NSMutableArray commonParamsTiming;
@property (nonatomic) NSObject<OS_dispatch_queue> seial_queue;
- (void)addComParamsGetTiming:;
- (void)addComParamsL0GetTiming:;
- (void)addComParamsWithURLGetTiming:;
- (id)seial_queue;
- (id)commonParamsTiming;
- (void)setCommonParamsTiming:;
- (void)trackCommonParamsTimingWithType:data:;
- (id)commonParamsNotL0Timing;
- (void)setCommonParamsNotL0Timing:;
- (id)commonParamsWithURLTiming;
- (void)setCommonParamsWithURLTiming:;
- (void)setSeial_queue:;
- (id)init;
- (id)tracker;
- (void)setTracker:;
- (void).cxx_destruct;
+ (id)shared;
@end
