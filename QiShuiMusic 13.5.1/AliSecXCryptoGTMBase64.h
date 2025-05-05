@interface AliSecXCryptoGTMBase64 : NSObject
+ (id)baseDecode:length:charset:requirePadding:;
+ (unsigned long long)baseDecode:srcLen:destBytes:destLen:charset:requirePadding:;
+ (id)baseEncode:length:charset:padded:;
+ (unsigned long long)baseEncode:srcLen:destBytes:destLen:charset:padded:;
+ (id)decodeBytes:length:;
+ (id)stringByEncodingBytes:length:;
+ (id)stringByEncodingData:;
+ (id)stringByWebSafeEncodingBytes:length:padded:;
+ (id)stringByWebSafeEncodingData:padded:;
+ (id)webSafeDecodeBytes:length:;
+ (id)webSafeDecodeData:;
+ (id)webSafeDecodeString:;
+ (id)webSafeEncodeBytes:length:padded:;
+ (id)webSafeEncodeData:padded:;
+ (id)encodeBytes:length:;
+ (id)decodeData:;
+ (id)encodeData:;
+ (id)decodeString:;
@end
