@interface ECDKIMCryptoUtil : NSObject
+ (BOOL)verifySignedData:withSignatureData:publicKeyData:hashingAlgorithm:error:;
@end
