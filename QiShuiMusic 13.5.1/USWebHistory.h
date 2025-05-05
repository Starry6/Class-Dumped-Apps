@interface USWebHistory : NSObject
@property (nonatomic) BOOL usageTrusted;
@property (nonatomic) <_DKKnowledgeEventStreamDeleting> eventStorage;
- (id)init;
- (id)eventStorage;
- (void).cxx_destruct;
- (id)initWithAuditToken:;
- (BOOL)usageTrusted;
- (id)initWithEventStorage:usageTrusted:;
- (void)deleteHistoryForURL:webApplication:completionHandler:;
- (void)deleteHistoryForURLs:webApplication:completionHandler:;
- (void)deleteHistoryForDomain:webApplication:completionHandler:;
- (void)deleteHistoryDuringInterval:webApplication:completionHandler:;
- (void)deleteAllHistoryForApplication:completionHandler:;
- (void)_deleteEventsWithPredicate:completionHandler:;
- (void)_deleteEventsWithWebUsagePredicate:videoUsagePredicate:completionHandler:;
@end
