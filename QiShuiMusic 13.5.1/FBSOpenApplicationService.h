@interface FBSOpenApplicationService : NSObject
- (id)init;
- (void)dealloc;
- (id)_initWithEndpoint:;
- (id)_remoteTarget;
- (void).cxx_destruct;
- (BOOL)canOpenApplication:reason:;
- (void)openApplication:withOptions:clientHandle:completion:;
- (void)openApplication:withOptions:completion:;
- (void)_openApplication:withOptions:clientHandle:completion:;
+ (id)new;
+ (id)serviceName;
+ (id)serviceWithEndpoint:;
+ (id)serviceWithDefaultShellEndpoint;
+ (BOOL)currentProcessServicesDefaultShellEndpoint;
@end
