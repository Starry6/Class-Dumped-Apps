@interface WBSHistoryDatabaseAccessBroker : NSObject
- (id)init;
- (void)requestAccessType:onQueue:completionHandler:;
- (id)_openDatabaseWithAccessType:onQueue:error:;
- (void)_requestAccessType:onQueue:completionHandler:;
- (void)requestAccessType:onQueue:completionHandlerWithInvalidationHandler:;
- (void).cxx_destruct;
- (id)initWithHistoryDatabaseURL:;
- (void)_requestReadWriteAccessOnQueue:completionHandler:;
- (void)_requestReadOnlyAccessOnQueue:completionHandler:;
- (id)databaseLastModifiedDate;
@end
