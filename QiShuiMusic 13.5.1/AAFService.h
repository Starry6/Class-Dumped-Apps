@interface AAFService : NSObject
@property (nonatomic) NSXPCListener serviceListener;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSArray preConnectEntitlements;
@property (nonatomic) Protocol exportedProtocol;
@property (nonatomic) @ exportedObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)exportedObject;
- (id)serviceListener;
- (id)serviceName;
- (void)startup;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setServiceListener:;
- (void)configureExportedInterface:;
- (void)_configureListener;
- (BOOL)shouldAcceptNewConnection:;
- (id)preConnectEntitlements;
- (id)exportedProtocol;
@end
