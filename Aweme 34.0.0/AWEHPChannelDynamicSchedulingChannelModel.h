@interface AWEHPChannelDynamicSchedulingChannelModel : NSObject
@property (nonatomic) NSString channelId;
@property (nonatomic) <AWEHPChannelControllerConfigProtocol> config;
@property (nonatomic) double preReleaseMemoryCapacity;
@property (nonatomic) double postReleaseMemoryCapacity;
@property (nonatomic) NSObject<AWEHPChannelLifeCycleInfoModelProtocol> lcInfoModel;
@property (nonatomic) AWEHPChannelDynamicSchedulingChannelMonitorModel monitorModel;
@property (nonatomic) UIViewController contentViewController;
- (void)setLcInfoModel:;
- (id)lcInfoModel;
- (double)preReleaseMemoryCapacity;
- (double)postReleaseMemoryCapacity;
- (id)monitorModel;
- (void)setPreReleaseMemoryCapacity:;
- (void)setPostReleaseMemoryCapacity:;
- (void)setMonitorModel:;
- (void)setConfig:;
- (id)config;
- (id)description;
- (void).cxx_destruct;
- (void)setContentViewController:;
- (id)contentViewController;
- (id)channelId;
- (void)setChannelId:;
@end
