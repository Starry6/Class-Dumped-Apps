@interface AKAdaptiveService : NSObject
@property (nonatomic) @? interruptionHandler;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)interruptionHandler;
- (void)dealloc;
- (void)setInterruptionHandler:;
- (void)resume;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)_initWithInterface:object:;
- (id)initWithInterface:strongObject:;
- (id)initWithInterface:weakObject:;
@end
