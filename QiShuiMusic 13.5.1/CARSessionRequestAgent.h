@interface CARSessionRequestAgent : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) CARSessionRequestHandlerProxy handlerProxy;
@property (nonatomic) <CARSessionRequestHandling> requestHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)listener;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setListener:;
- (id)requestHandler;
- (id)initWithRequestHandler:;
- (BOOL)wantsCarPlayControlAdvertisingForUSB;
- (BOOL)wantsCarPlayControlAdvertisingForWiFiUUID:;
- (id)handlerProxy;
- (void)setHandlerProxy:;
@end
