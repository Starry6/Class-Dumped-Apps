@interface BSServiceConnectionListener : NSObject
@property (nonatomic) NSString domain;
@property (nonatomic) NSString service;
@property (nonatomic) NSString instance;
@property (nonatomic) BSServiceConnectionEndpoint endpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)instance;
- (void)setService:;
- (id)init;
- (void)setInstance:;
- (void)dealloc;
- (void)setDelegate:;
- (id)service;
- (void)didReceiveConnection:;
- (void).cxx_destruct;
- (id)endpoint;
- (id)description;
- (id)domain;
- (void)setDomain:;
- (void)invalidate;
- (void)activate;
+ (id)listenerWithConfigurator:;
+ (id)extendBootstrap;
@end
