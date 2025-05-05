@interface BCAABundleContext : NSObject
@property (nonatomic) NSBundle bundle;
- (void)addServiceListener:forService:;
- (BOOL)checkIfLazyDylibEnable:;
- (id)contentForCustomSection:;
- (id)dylibNameForCustomSection:andModule:;
- (id)dylibNameForCustomSection:andModule:withKey:;
- (Class)getClassService:;
- (id)getInstanceService:;
- (void)getLazyLoadSectionData;
- (BOOL)isServiceRegistered:;
- (BOOL)registerService:toClass:instancePointer:;
- (void)removeServiceListener:forService:;
- (void)resolveAppBundleServices;
- (void)startResolve;
- (id)bundle;
- (void).cxx_destruct;
- (id)initWithBundle:;
@end
