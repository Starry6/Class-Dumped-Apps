@interface UASDKSecure : NSObject
+ (id)AESCryptoWithString:key:option:;
+ (id)base64DataFromString:;
+ (id)base64StringFromData:;
+ (id)certificateDataFromHexString:;
+ (id)hexStringFromData:shouldUpperCaseCharacter:;
+ (id)md5SignatureWithString:;
+ (id)randomIdWithLength:;
+ (id)rsaEncryptString:withKey:;
+ (id)rsaPublicKeyFromKeyString:;
+ (id)rsaSignString:withKey:;
+ (id)hexToData:;
@end
