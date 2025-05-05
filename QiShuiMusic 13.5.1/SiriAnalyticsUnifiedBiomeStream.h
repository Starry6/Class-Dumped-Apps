@interface SiriAnalyticsUnifiedBiomeStream : NSObject
- (id)init;
- (void)fetchMessagesSinceBookmark:receiveMessage:completion:;
- (id)initWithStorageURL:prefs:;
- (void)fetchMessagesSince:receiveMessage:completion:;
- (void).cxx_destruct;
- (void)sendEvents:;
- (void)prune;
- (void)fetchMessagesBatchSinceBookmark:batchSize:completion:;
@end
