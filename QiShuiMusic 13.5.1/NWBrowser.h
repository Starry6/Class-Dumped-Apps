@interface NWBrowser : NSObject
@property (nonatomic) NSObject<OS_nw_browser> internalBrowser;
@property (nonatomic) NSSet internalDiscoveredEndpoints;
@property (nonatomic) NWBrowseDescriptor descriptor;
@property (nonatomic) NWParameters parameters;
@property (nonatomic) NSSet discoveredEndpoints;
- (id)descriptor;
- (void)cancel;
- (void)dealloc;
- (id)parameters;
- (void).cxx_destruct;
- (id)discoveredEndpoints;
- (void)setUpdateHandler;
- (id)initWithDescriptor:parameters:;
- (id)copyDiscoveredEndpoints;
- (id)internalBrowser;
- (id)internalDiscoveredEndpoints;
- (void)setInternalDiscoveredEndpoints:;
+ (BOOL)automaticallyNotifiesObserversForKey:;
@end
