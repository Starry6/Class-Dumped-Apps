@interface TKAuthContext : NSObject
@property (nonatomic) LAContext authContext;
@property (nonatomic) NSData ACMHandle;
@property (nonatomic) TKSharedResource sharedResource;
- (id)initWithLAContext:ACMHandle:sharedResource:;
- (id)ACMHandle;
- (id)authContext;
- (void).cxx_destruct;
- (id)sharedResource;
@end
