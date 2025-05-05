@interface ASSCommonUtils : NSObject
+ (id)sha1FromString:;
+ (id)decryptStringWithBASE64andAES:;
+ (id)encodeBase64Data:;
+ (id)encryptWithAESandBASE64:;
+ (id)formatDataForServer:;
+ (id)getValueFromDictionary:withKey:defaultValue:;
+ (id)getValueFromProperty:;
+ (id)gzipAndBase64String:;
+ (BOOL)isBlankString:;
+ (id)md5FromString:;
+ (id)stringFromSortedDictionary:;
+ (id)gzipData:;
+ (id)encodeBase64:;
@end
