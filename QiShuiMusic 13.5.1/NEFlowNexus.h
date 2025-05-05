@interface NEFlowNexus : NENexus
@property (nonatomic) BOOL supportsBrowseRequests;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)supportsBrowseRequests;
- (BOOL)setDiscoveredEndpoints:forClient:;
- (id)initWithName:delegate:;
- (void)handleAssertFromClient:;
- (void)handleUnassertFromClient:;
- (void)setRemoteConnectionDirector:;
- (void)setSupportsBrowseRequests:;
@end
