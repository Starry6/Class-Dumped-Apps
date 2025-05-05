@interface SiriAnalyticsLocalStorageDispatcher : NSObject
- (id)init;
- (id)initWithQueue:messageStore:legacyStorage:;
- (void).cxx_destruct;
- (void)storeMessages:;
@end
