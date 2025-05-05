@interface EAccountOCAESCrypt : NSObject
+ (id)AES128DecryptWithKey:gIv:decrypData:;
+ (id)AES128EncryptWithKey:gIv:messageData:;
+ (id)dataForHexString:;
+ (id)decrypt:password:;
+ (id)encrypt:password:;
+ (id)hex:useLower:;
@end
