@interface BDXLynxKitApi : BDXKitApi
+ (id)createLynxKitParamsWithContext:;
+ (id)createLynxKitParamsWithContext:beforeCreateLynxView:;
+ (id)provideKitViewWithLynxParams:;
+ (id)provideKitViewWithURL:context:;
+ (id)provideKitViewWithURL:context:beforeCreateLynxView:;
+ (void)registerUIElementIfNeed:kitView:;
@end
