@interface CUBitCoderDecryptRequest : NSObject
@property (nonatomic) NSData aad;
@property (nonatomic) Q authTagLength;
@property (nonatomic) NSData data;
@property (nonatomic) NSData nonce;
- (id)data;
- (id)nonce;
- (void).cxx_destruct;
- (void)setData:;
- (void)setNonce:;
- (id)aad;
- (void)setAad:;
- (unsigned long long)authTagLength;
- (void)setAuthTagLength:;
@end
