@interface BCAAServiceReference : NSObject
@property (nonatomic) NSString bundleName;
@property (nonatomic) NSBundle bundle;
@property (nonatomic) # serviceCls;
@property (nonatomic) BOOL isLoadable;
@property (nonatomic) BOOL isweakProxy;
@property (nonatomic) NSValue instancePointer;
@property (nonatomic) BCAABundleServiceProxy serviceProxy;
@property (nonatomic) BCAABundleServiceProxy weakProxy;
- (id)instancePointer;
- (void)setIsweakProxy:;
- (BOOL)isLoadable;
- (BOOL)isweakProxy;
- (void)registerService:forBundle:pointer:;
- (Class)serviceCls;
- (void)setIsLoadable:;
- (void)setWeakProxy:;
- (id)weakProxy;
- (id)serviceProxy;
- (void)setServiceProxy:;
- (id)bundle;
- (void).cxx_destruct;
- (id)initWithBundle:;
- (id)bundleName;
@end
