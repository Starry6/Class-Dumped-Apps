@interface IESLiveLinkLiveRtcHost : NSObject
@property (nonatomic) NSMutableArray liveRtcApiHosts;
@property (nonatomic) NSMutableArray liveRtcSignalingHosts;
@property (nonatomic) NSMutableArray liveRtcAccessHosts;
- (id)liveRtcApiHosts;
- (id)liveRtcAccessHosts;
- (id)liveRtcSignalingHosts;
- (void)setLiveRtcAccessHosts:;
- (void)setLiveRtcApiHosts:;
- (void)setLiveRtcSignalingHosts:;
- (id)init;
- (void).cxx_destruct;
@end
