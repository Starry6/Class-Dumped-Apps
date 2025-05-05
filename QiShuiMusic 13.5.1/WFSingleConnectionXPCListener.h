@interface WFSingleConnectionXPCListener : NSObject
@property (nonatomic) @ exportedObject;
@property (nonatomic) NSXPCInterface exportedInterface;
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) NSXPCConnection activeConnection;
@property (nonatomic) NSXPCListenerEndpoint endpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exportedObject;
- (id)exportedInterface;
- (void)setActiveConnection:;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)activeConnection;
- (id)initWithExportedObject:exportedInterface:;
@end
