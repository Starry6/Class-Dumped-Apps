@interface BDPrivacyCertEntry : NSObject
+ (void)clearCertInThreadContext;
+ (id)privacyCertValidateImp;
+ (id)validateAndTranslatePrivacyCert:context:;
+ (id)validateAndTranslatePrivacyCert:context:withErrorHandler:wrappedAPI:;
+ (id)validatePrivacyCert:context:;
+ (void)validatePrivacyCert:context:withErrorHandler:wrappedAPI:;
@end
