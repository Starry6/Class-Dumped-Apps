@interface AMapFoundationAOSUtility : NSObject
+ (id)decryptedStringWithInput:xxteaKey:;
+ (id)encryptedStringWithInput:xxteaKey:;
+ (id)generate16ByteUUID;
+ (id)newEncryptedStringWithInput:xxteaKey:;
+ (id)signStringWithParams:signatureParams:serverKey:;
@end
