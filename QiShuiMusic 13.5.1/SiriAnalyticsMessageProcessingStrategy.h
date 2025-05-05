@interface SiriAnalyticsMessageProcessingStrategy : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)processWithMessages:;
- (id)initWithQueue:localStorageDispatcher:featureFlags:fbf:;
@end
