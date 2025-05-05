@interface VCBasebandMetrics : NSObject
@property (nonatomic) I targetBitrate;
@property (nonatomic) BOOL isTargetBitrateStabilized;
@property (nonatomic) VCRateControlMediaController mediaController;
- (id)init;
- (void)dealloc;
- (id)mediaController;
- (void)setMediaController:;
- (unsigned int)targetBitrate;
- (void)setTargetBitrate:;
- (void)enableBasebandLogDump:;
- (id)getBasebandMetricsWithNotification:;
- (void)addInfoListWithNotification:;
- (void)calculateBitratesAndDelaysWithTotalQueueDepth:;
- (double)updateTotalQueueDepth:;
- (void)normalizeBDCD:;
- (void)resetBDCDList;
- (void)resetBBNoteHistoryList;
- (void)addBDCDListWithNotificationArrivalTime:bdcd:queuingDelay:;
- (void)setIsTargetBitrateStabilized:;
- (BOOL)isTargetBitrateStabilized;
@end
