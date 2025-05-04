@interface AWEHomepageChannelPerfMetricsMonitorPostPlugin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)topChannelControllerViewDidLoad:;
- (void)topChannelControllerViewDidResume:;
- (void)topChannelControllerViewWillAppear:;
- (void)topChannelControllerViewDidAppear:;
- (void)bottomChannelItemViewDidLoad:channelConfig:;
- (void)bottomChannelItemViewWillAppear:channelConfig:;
- (void)bottomChannelItemViewDidAppear:channelConfig:;
@end
