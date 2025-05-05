@interface ARDaemonServiceListener : NSObject
@property (nonatomic) <ARDaemonServiceListenerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)initWithDelegate:enableAnonymousListeners:;
- (id)listenerForServiceNamed:;
- (BOOL)addServiceWithQueueByName:serviceClass:;
- (BOOL)addServiceByName:serviceClass:;
- (id)createService:;
@end
