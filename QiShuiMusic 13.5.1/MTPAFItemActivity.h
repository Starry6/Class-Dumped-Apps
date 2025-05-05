@interface MTPAFItemActivity : NSObject
@property (nonatomic) MTPAFPlaylistItem item;
@property (nonatomic) MTPAFPlaylist playlist;
@property (nonatomic) MTMediaActivityEventHandler startEventHandler;
@property (nonatomic) MTMediaActivityEventHandler stopEventHandler;
@property (nonatomic) MTMetricsData startMetricsData;
@property (nonatomic) MTMetricsData stopMetricsData;
- (id)item;
- (void)setItem:;
- (void).cxx_destruct;
- (id)playlist;
- (void)setPlaylist:;
- (id)startEventHandler;
- (id)stopEventHandler;
- (id)startMetricsData;
- (void)setStartMetricsData:;
- (id)stopMetricsData;
- (void)setStopMetricsData:;
- (void)startAtOverallPosition:triggerType:reason:eventData:;
- (void)stopAtOverallPosition:triggerType:reason:eventData:;
- (void)populatePlaylistAndItemData:;
- (void)setStartEventHandler:;
- (void)setStopEventHandler:;
@end
