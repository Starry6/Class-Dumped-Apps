@interface STDynamicActivityAttributionMonitor : NSObject
@property (nonatomic) @? handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)initWithServerHandle:;
- (id)attributionForClient:;
- (void)setHandler:;
- (id)auditToken;
- (void)currentAttributionsDidChange:;
- (id)handler;
- (id)currentAttributions;
- (void).cxx_destruct;
- (id)attributionForAttribution:;
- (void)invalidate;
- (void)activate;
@end
