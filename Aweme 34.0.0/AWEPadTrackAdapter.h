@interface AWEPadTrackAdapter : HTSService
@property (nonatomic) AWEPadChannelTracker channelTracker;
@property (nonatomic) double ration;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL enableFix;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appendPadCommTrackParmas:;
- (id)beginToTrackCurrentChannelWithAction:;
- (void)trackPadChannelRefreshWithMonitor:;
- (void)buildChannelTrackMonitorWithEnterFrom:type:;
- (void)trackPadChannelRefreshWithMonitorInfo:;
- (BOOL)enableTrackStuckFix;
- (void)updatePadCommonParams;
- (BOOL)enableFix;
- (double)ration;
- (void)setChannelTracker:;
- (id)channelTracker;
- (void)setRation:;
- (void)setEnableFix:;
- (id)init;
- (void).cxx_destruct;
- (void)setIsLandscape:;
- (BOOL)isLandscape;
@end
