@interface SiriAnalyticsTimePeriodBuffer : NSObject
- (void)_timerElapsed;
- (void)onMessagesProduced:;
- (void)_startProducing;
- (void)enqueueMessages:;
- (void).cxx_destruct;
- (void)_stopProducing;
- (id)initWithInterval:queue:;
@end
