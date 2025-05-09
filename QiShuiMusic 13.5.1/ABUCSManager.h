@interface ABUCSManager : NSObject
+ (id)abu_hmacSha256WithData:hmacKey:;
+ (id)abu_hmacSha512WithData:hmacKey:;
+ (id)abu_aesEncrypt3WithData:key:iv:;
+ (id)abu_hmacSha224WithData:hmacKey:;
+ (id)abu_hmacSha384WithData:hmacKey:;
+ (id)_errorWithCode:desc:cmd:data:key:iv:;
+ (id)abu_aesDecryptWithBase64:hexKey:hexIv:;
+ (id)abu_aesDecryptWithBase64:key:;
+ (id)abu_aesDecryptWithBase64:key:iv:;
+ (id)abu_aesDecryptWithData:key:iv:;
+ (id)abu_aesDecryptWithData:key:iv:error:;
+ (id)abu_aesEncrypt3WithData:key:iv:error:;
+ (id)abu_aesEncrypt:hexKey:hexIv:;
+ (id)abu_aesEncrypt:key:;
+ (id)abu_aesEncrypt:key:iv:;
+ (id)abu_aesEncryptWithData:key:iv:;
+ (id)abu_aesEncryptWithData:key:iv:error:;
+ (id)abu_hmacMd5:hmacKey:;
+ (id)abu_hmacMd5WithData:hmacKey:;
+ (id)abu_hmacSha1:hmacKey:;
+ (id)abu_hmacSha1WithData:hmacKey:;
+ (id)abu_hmacSha224:hmacKey:;
+ (id)abu_hmacSha256:hmacKey:;
+ (id)abu_hmacSha384:hmacKey:;
+ (id)abu_hmacSha512:hmacKey:;
+ (id)abu_md5:;
+ (id)abu_md5WithData:;
+ (id)abu_sha1:;
+ (id)abu_sha1WithData:;
+ (id)abu_sha224:;
+ (id)abu_sha224WithData:;
+ (id)abu_sha256:;
+ (id)abu_sha256WithData:;
+ (id)abu_sha384:;
+ (id)abu_sha384WithData:;
+ (id)abu_sha512:;
+ (id)abu_sha512WithData:;
@end
