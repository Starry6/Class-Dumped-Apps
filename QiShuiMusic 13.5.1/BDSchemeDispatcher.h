@interface BDSchemeDispatcher : BDDispatcherBase
@property (nonatomic) BDDispatcherBase backupDispatcher;
- (BOOL)isSupportModuleActionDispatcher;
- (void)dispatchWithCompletionHandler:;
- (void)dispatchWithPlugin:completionHandler:;
- (BOOL)doCallbackWithStatus:data:completionHandler:;
- (id)initWithURL:sourceURL:sourceApplication:;
- (void)dispatch;
+ (BOOL)isSupportScheme:;
+ (void)registerDispatcherBlock:;
+ (void)registerEventBlock:;
+ (void)registerGuardBlock:;
+ (void)registerModuleName:actionList:;
+ (void)registerParseFinishHandler:forHostString:;
+ (void)registerPluginPrefix:suffix:;
+ (BOOL)registerPluginWithClassName:;
+ (BOOL)registerPluginWithClassName:module:;
+ (void)registerRedirectModule:action:toModule:toAction:;
+ (void)registerSupportSchemes:;
+ (BOOL)accessInstanceVariablesDirectly;
@end
