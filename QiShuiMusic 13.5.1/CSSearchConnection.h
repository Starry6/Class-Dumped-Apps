@interface CSSearchConnection : CSXPCConnection
@property (nonatomic) NSMutableDictionary queries;
@property (nonatomic) BOOL previouslyInitialized;
- (void)setQueries:;
- (void)cancelQuery:;
- (void)preheat:;
- (void)sendMessageAsync:completion:;
- (id)init;
- (id)removeQueryForID:;
- (void)handleError:;
- (void)setQuery:forID:;
- (void)startQuery:context:;
- (id)createXPCDictionaryForQuery:queryID:queryContext:needsInitialization:;
- (id)queries;
- (void).cxx_destruct;
- (id)queryForID:;
- (id)initWithMachServiceName:;
- (BOOL)previouslyInitialized;
- (void)handleReply:;
+ (id)sharedCSUserFSConnection;
+ (id)sharedSearchConnection;
@end
