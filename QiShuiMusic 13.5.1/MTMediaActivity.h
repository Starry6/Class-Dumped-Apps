@interface MTMediaActivity : NSObject
@property (nonatomic) MTPAFKit pafKit;
@property (nonatomic) q type;
@property (nonatomic) MTMetricsData startMetricsData;
@property (nonatomic) MTMetricsData stopMetricsData;
@property (nonatomic) <MTMediaPlaylistItem> playlistItem;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isStopped;
- (id)playlistItem;
- (void)setPlaylistItem:;
- (id)eventDataForTransitioningEvents;
- (id)initWithType:playlistItem:pafKit:;
- (unsigned long long)positionFromOverallPosition:;
- (void)startedAtOverallPosition:type:reason:eventData:;
- (void)stoppedAtOverallPosition:type:reason:eventData:;
- (id)startEventHandler;
- (id)stopEventHandler;
- (id)startMetricsData;
- (void)setStartMetricsData:;
- (id)stopMetricsData;
- (void)setStopMetricsData:;
- (id)pafKit;
- (void)setPafKit:;
+ (unsigned long long)startOverallPositionForItem:;
@end
