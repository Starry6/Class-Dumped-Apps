@interface AWEIMComponentDI : NSObject
@property (nonatomic) NSMapTable servicesMap;
@property (nonatomic) NSMutableDictionary multiableServices;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)resolveService:;
- (void)bindService:target:;
- (void)injectToMultiableService:withTarget:;
- (id)resolveMultiableService:;
- (id)resolveService:withFactory:;
- (void)setServicesMap:;
- (id)servicesMap;
- (BOOL)__checkServiceProvider:canProvideService:;
- (id)multiableServices;
- (void)setMultiableServices:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
