@interface FPXXPCListenerDelegate : NSObject
@property (nonatomic) FPXExtensionContext context;
@property (nonatomic) NSXPCInterface interface;
@property (nonatomic) @ exportedObject;
@property (nonatomic) NSString serviceName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interface;
- (void)setInterface:;
- (id)exportedObject;
- (id)context;
- (void)setServiceName:;
- (id)serviceName;
- (void)setExportedObject:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setContext:;
@end
