@interface JEMediaActivity : NSObject
@property (nonatomic) q type;
@property (nonatomic) <JEMediaPlaylistItem> playlistItem;
@property (nonatomic) BOOL isStopped;
- (id)init;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isStopped;
- (id)playlistItem;
- (void)setPlaylistItem:;
- (id)initWithType:playlistItem:pipeline:topic:;
- (unsigned long long)positionWithOverallPosition:;
- (void)startedAtOverallPosition:type:reason:eventData:transitioningEventData:;
- (void)stoppedAtOverallPosition:type:reason:eventData:transitioningEventData:;
- (id)eventDataForTransitioningEvents;
- (id)startMetricsFields;
- (id)stopMetricsFields;
- (void)postProcessedStartMetricsFieldsWithCompletion:;
- (void)postProcessedStopMetricsFieldsWithCompletion:;
@end
