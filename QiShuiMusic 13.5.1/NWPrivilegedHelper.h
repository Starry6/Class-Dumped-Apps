@interface NWPrivilegedHelper : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSObject<OS_xpc_object> listener;
@property (nonatomic) NSMutableDictionary handlers;
@property (nonatomic) NSMutableSet allKnownEntitlementSet;
@property (nonatomic) NSMutableArray allKnownEntitlementGroup;
- (id)handlers;
- (void)setHandlers:;
- (void)setAllKnownEntitlementGroup:;
- (BOOL)startXPCListener;
- (void)registerHandlerFunction:type:allowedEntitlementGroup:;
- (id)listener;
- (id)allKnownEntitlementGroup;
- (void)setAllKnownEntitlementSet:;
- (void)handleRequest:onConnection:;
- (void)registerHelperFunctions;
- (id)allKnownEntitlementSet;
- (void)startThrottlePolicyEventListener;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)initWithQueue:;
- (void)setListener:;
- (id)queue;
@end
