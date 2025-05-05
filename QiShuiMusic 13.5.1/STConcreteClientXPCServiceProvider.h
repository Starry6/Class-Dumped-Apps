@interface STConcreteClientXPCServiceProvider : NSObject
@property (nonatomic) NSXPCListener activeListener;
@property (nonatomic) @ providedService;
@property (nonatomic) NSXPCInterface providedServiceInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)providePasscodeAuthenticationProviderService;
- (id)providePasscodeProviderService;
- (id)activeListener;
- (void)setActiveListener:;
- (id)providedService;
- (void)setProvidedService:;
- (id)providedServiceInterface;
- (void)setProvidedServiceInterface:;
@end
