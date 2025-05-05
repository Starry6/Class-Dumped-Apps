@interface AVCRateControlFeedbackController : NSObject
@property (nonatomic) I mode;
@property (nonatomic) VCConnectionHealthMonitor connectionHealthMonitor;
- (void)dealloc;
- (unsigned int)mode;
- (void)setMode:;
- (id)initWithStatisticsCollector:;
- (BOOL)getFeedbackMessage:type:metaData:error:;
- (BOOL)processFeedbackMessage:type:metaData:error:;
- (BOOL)getRateControlFeedbackMessage:type:metaData:error:;
- (BOOL)getVCStatisticsFeedbackMessage:time:;
- (unsigned int)getConnectionStatsBlob;
- (BOOL)processRateControlFeedbackMessage:type:error:time:;
- (BOOL)processRateControlProbingMessage:type:error:;
- (id)translateRateControlDataWithFeedbackMessage:;
- (id)translateRateControlFeedbackMessageFromData:;
- (id)translateAFRCFeedbackMessage:;
- (BOOL)translateMediaControlInfo:feedbackMessage:;
- (BOOL)detectOutOfOrderFeedbackMessage:;
- (void)resetBurstyLossStatistics;
- (id)connectionHealthMonitor;
- (void)setConnectionHealthMonitor:;
@end
