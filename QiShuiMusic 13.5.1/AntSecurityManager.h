@interface AntSecurityManager : NSObject
+ (id)wbSign:;
+ (int)deleteSafeStore:bizType:;
+ (id)getSafeStore:bizType:;
+ (id)getStorageFilePath;
+ (id)securityDecrypt:;
+ (id)securityEncrypt:;
+ (int)setSafeStore:value:bizType:;
@end
