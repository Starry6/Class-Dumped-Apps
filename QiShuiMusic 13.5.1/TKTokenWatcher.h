@interface TKTokenWatcher : NSObject
@property (nonatomic) TKClientToken client;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) NSArray tokenIDs;
- (id)initWithClient:;
- (id)init;
- (void)dealloc;
- (id)initWithEndpoint:;
- (id)client;
- (void)startWatching;
- (void).cxx_destruct;
- (id)endpoint;
- (id)tokenIDs;
- (void)insertedToken:;
- (void)removedToken:;
- (id)initWithInsertionHandler:;
- (void)setInsertionHandler:;
- (void)addRemovalHandler:forTokenID:;
- (id)tokenInfoForTokenID:;
@end
