@interface AWEHomePageChannelEnterPerfMetricsMonitorSessionParams : NSObject
@property (nonatomic) NSArray events;
@property (nonatomic) NSString session;
@property (nonatomic) BOOL disableEndDispatch;
@property (nonatomic) NSString channelId;
@property (nonatomic) q channelLoadCount;
@property (nonatomic) BOOL slidingViewWillDecelerate;
- (void)setDisableEndDispatch:;
- (BOOL)disableEndDispatch;
- (long long)channelLoadCount;
- (void)setChannelLoadCount:;
- (BOOL)slidingViewWillDecelerate;
- (void)setSlidingViewWillDecelerate:;
- (id)initDisableDispatchInstanceWithEvents:session:channelId:;
- (void)setEvents:;
- (void)setSession:;
- (id)events;
- (id)session;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)channelId;
- (void)setChannelId:;
@end
