@interface ASSCommonUtilsZZZX : NSObject
+ (id)sha1FromString:;
+ (id)convertToSortStringWithDict:;
+ (id)decryptStringWithBASE64andAES:;
+ (id)encodeBase64Data:;
+ (id)encryptClientKeyWithAESandBASE64:;
+ (id)encryptTokenWithAESandBASE64:;
+ (id)encryptWithAESandBASE64:;
+ (id)formatDataForServer:;
+ (id)getStorageFilePath;
+ (id)getValueFromDictionary:withKey:defaultValue:;
+ (id)getValueFromProperty:;
+ (id)gzipAndBase64String:;
+ (BOOL)isBlankString:;
+ (id)jsonObjectWithString:;
+ (id)md5FromString:;
+ (id)stringFromSortedDictionary:;
+ (id)stringOrEmpty:;
+ (id)wbEncrypt:;
+ (id)gzipData:;
+ (id)jsonStringWithObject:;
+ (id)encodeBase64:;
@end
