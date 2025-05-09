@interface AWEDLMError : NSObject
+ (id)dlm_teenmodeError;
+ (id)dlm_cameraError;
+ (id)dlm_otherError;
+ (id)dlm_exceptionError;
+ (id)dlm_errorWithCode:message:;
+ (id)dlm_loginError;
+ (id)dlm_basicModeError;
+ (id)dlm_antiAddictError;
+ (id)dlm_u18BlockError;
+ (id)dlm_schemaInterceptError;
+ (id)dlm_emptySchemaError;
+ (id)dlm_zlinkError;
+ (id)dlm_otherPageError;
+ (id)dlm_privacyAlertError;
@end
