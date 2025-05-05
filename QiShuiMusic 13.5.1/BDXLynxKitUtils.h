@interface BDXLynxKitUtils : NSObject
+ (SEL)generateUpdateTemplateSEL:view:;
+ (SEL)generateLoadTemplateSEL:view:;
+ (SEL)generateLoadTemplateWithBundleSEL:view:;
+ (BOOL)isRelativeURL:;
+ (BOOL)isResourceLoaderNotHandleURL:;
+ (id)lynxSignVerifierWithResponse:originURL:containerName:bid:aid:enterFrom:;
+ (id)paramsGlobalProps:;
+ (void)toastErrorMessage:forDuration:;
+ (BOOL)updateTemplateData:globalProps:error:;
@end
