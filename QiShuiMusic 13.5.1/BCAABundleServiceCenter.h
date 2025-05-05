@interface BCAABundleServiceCenter : NSObject
- (void)addServiceListener:forService:;
- (BOOL)bindService:toBundle:;
- (void)broadcastServiceRegistration:;
- (id)getBundleNameOfService:;
- (Class)getClassService:fromBundle:;
- (id)getInstanceService:fromBundle:;
- (BOOL)isServiceRegistered:;
- (BOOL)registerService:toClass:forBundle:instancePointer:;
- (void)removeServiceListener:forService:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultCenter;
@end
