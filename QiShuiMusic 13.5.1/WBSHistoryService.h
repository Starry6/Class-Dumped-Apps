@interface WBSHistoryService : NSObject
@property (nonatomic) WBSHistoryDatabaseAccessBroker databaseAccessBroker;
@property (nonatomic) WBSHistoryURLCompletionDataStore urlCompletionDataStore;
@property (nonatomic) NSURL databaseURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)databaseURL;
- (id)init;
- (void)shutdown;
- (void)dealloc;
- (void)resume;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)initWithListener:;
- (id)_createListener;
- (BOOL)_connectionIsEntitledToUseUserDatabase:;
- (id)_openOrReuseExistingDatabaseWithOptions:error:;
- (void)connectWithOptions:connection:completionHandler:;
- (void)disconnectDatabase:completionHandler:;
- (id)databaseAccessBroker;
- (id)urlCompletionDataStore;
@end
