@interface HybridLynxKitUtils : NSObject
+ (id)_defaultGlobalPropsWithParams:;
+ (BOOL)checkSupportLoadTemplateWithBundle:view:;
+ (id)globalPropsWithParams:;
+ (id)globalPropsWithParams:onDictionaryParamsCreated:;
+ (BOOL)isRelativeURL:;
+ (BOOL)isResourceLoaderNotHandleURL:;
+ (id)lynxKitParamsWithContext:;
+ (void)toastErrorMessage:forDuration:;
@end
