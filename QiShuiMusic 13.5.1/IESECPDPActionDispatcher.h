@interface IESECPDPActionDispatcher : NSObject
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) IESECPDPState state;
@property (nonatomic) IESECommerceServiceProvider provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dispatchAction:;
- (void)object:observe:handler:;
- (void)setProvider:;
- (void)setState:;
- (void)setSemaphore:;
- (id)provider;
- (id)state;
- (void).cxx_destruct;
- (id)semaphore;
- (id)initWithServiceProvider:;
@end
