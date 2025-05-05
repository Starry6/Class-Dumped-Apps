@interface MRAVRoutingClientController : NSObject
@property (nonatomic) MRMediaRemoteService mediaRemoteService;
- (id)init;
- (void)dealloc;
- (id)mediaRemoteService;
- (void)_pickableRoutesDidChangeNotification:;
- (void).cxx_destruct;
- (void)fetchPickableRoutesForCategory:completion:;
- (id)initWithMediaRemoteService:;
@end
