@interface MCCrypto : NSObject
+ (id)copyCertificateRefFromPKCS1Data:;
+ (id)copyCertificateRefFromPEMData:;
+ (BOOL)isValidPKCS12Data:;
+ (id)_decryptionFailedErrorWithUnderlyingError:;
+ (id)objectFromEncryptedData:outCertificate:outError:;
+ (id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+ (id)createAndStoreNewActivationLockBypassCodeAndHash;
+ (void)createNewActivationLockBypassCodeOutCode:outRawBytes:outHash:;
+ (id)storeActivationLockBypassCode:hash:;
+ (id)storedActivationLockBypassCodeWithOutError:;
+ (void)clearStoredActivationLockBypassCode;
+ (void)clearStoredActivationLockHash;
+ (id)storedActivationLockBypassCodeHash;
@end
