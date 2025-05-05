@interface CUBitCoder : NSObject
@property (nonatomic) @? decryptHandler;
@property (nonatomic) @? encryptHandler;
@property (nonatomic) NSDictionary schema;
- (id)schema;
- (void)dealloc;
- (void)setSchema:;
- (void).cxx_destruct;
- (void)invalidate;
- (id)decodeBytes:length:error:;
- (id)decodeBytes:length:info:error:;
- (id)decodeData:error:;
- (id)decodeData:info:error:;
- (id)encodeFields:variantIdentifier:error:;
- (id)encodeFields:variantIdentifier:info:error:;
- (unsigned long long)_readValue:bitCount:bitIndex:err:;
- (void)_writeValue:bitCount:bitVector:;
- (id)decryptHandler;
- (void)setDecryptHandler:;
- (id)encryptHandler;
- (void)setEncryptHandler:;
@end
