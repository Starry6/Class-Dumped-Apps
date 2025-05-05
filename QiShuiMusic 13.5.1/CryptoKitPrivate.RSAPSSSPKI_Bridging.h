@interface CryptoKitPrivate.RSAPSSSPKI_Bridging : NSObject
- (id)initWithData:error:;
- (id)init;
- (void).cxx_destruct;
- (id)publicKeyBytes;
+ (id)serializeWithKeyBytes:error:;
@end
