@interface BDUGFlowStatisticsLogger : NSObject
@property (nonatomic) <BDUGFlowStatisticsLoggerProtocol> delegate;
- (void)onLogLevel:info:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
