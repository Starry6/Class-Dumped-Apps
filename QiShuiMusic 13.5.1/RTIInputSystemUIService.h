@interface RTIInputSystemUIService : RTIInputSystemService
@property (nonatomic) RTIInputSystemService rtiService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)listener:didReceiveConnection:withContext:;
- (void).cxx_destruct;
- (id)listenerEndpoint;
- (BOOL)_canResumeConnection;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (id)initWithDomainName:serviceName:;
- (id)rtiService;
+ (id)sharedServiceWithDomainName:serviceName:;
@end
