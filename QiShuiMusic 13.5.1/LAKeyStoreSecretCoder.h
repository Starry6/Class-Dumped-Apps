@interface LAKeyStoreSecretCoder : NSObject
- (void)wrapData:completion:;
- (void)unwrapData:completion:;
- (id)_generateNonce;
- (BOOL)_isCoderAvailable;
@end
