@interface AXMService : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) <AXMServiceDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)setXpcConnection:;
- (void)_destroyXPCConnection;
- (id)delegate;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)_serviceProxy;
- (void)prewarmVisionEngineService;
- (void)visionEngine:evaluateSource:context:options:result:;
@end
