@interface VSServiceListener : NSObject
@property (nonatomic) NSMutableSet connectionHandlers;
@property (nonatomic) NSArray entitlementNames;
@property (nonatomic) NSXPCInterface exportedInterface;
@property (nonatomic) @ exportedObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setExportedInterface:;
- (id)exportedObject;
- (id)exportedInterface;
- (void)setExportedObject:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)connectionHandlers;
- (void)connectionHandlerDidFinish:;
- (void)_addConnectionHandler:;
- (void)_removeConnectionHandler:;
- (id)entitlementNames;
- (void)setEntitlementNames:;
- (void)setConnectionHandlers:;
@end
