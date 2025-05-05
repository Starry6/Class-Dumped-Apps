@interface CJPaySafeManager : NSObject
+ (id)cj_encryptWith:token:errorCode:;
+ (id)buildEngimaEngine:;
+ (id)buildEngimaEngine:useCert:;
+ (id)cj_decryptWith:errorCode:;
+ (id)cj_encryptWith:errorCode:;
+ (id)cj_objDecryptWith:engimaEngine:errorCode:;
+ (id)cj_objEncryptWith:errorCode:engimaEngine:;
+ (id)encryptMediaData:tfccCert:iSecCert:engimaVersion:;
+ (BOOL)isEngimaISec;
+ (id)isecClass;
+ (id)secureInfo;
+ (id)secureInfoVersion;
+ (id)tfccClass;
@end
