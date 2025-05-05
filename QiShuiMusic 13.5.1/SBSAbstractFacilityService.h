@interface SBSAbstractFacilityService : NSObject
@property (nonatomic) SBSServiceFacilityClient client;
@property (nonatomic) NSObject<OS_dispatch_queue> callbackQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)callbackQueue;
- (id)client;
- (void).cxx_destruct;
- (void)invalidate;
+ (Class)serviceFacilityClientClass;
@end
