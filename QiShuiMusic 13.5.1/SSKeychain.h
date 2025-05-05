@interface SSKeychain : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)createAttestationDataForAccountIdentifier:completionBlock:;
- (void)createAttestationDataForAccountIdentifier:purpose:completionBlock:;
- (void)createX509CertChainDataForAccountIdentifier:purpose:completionBlock:;
- (void)deleteKeychainTokensForAccountIdentifier:completionBlock:;
- (void)getPublicKeyDataForAccountIdentifier:completionBlock:;
- (void)getPublicKeyDataForAccountIdentifier:purpose:completionBlock:;
- (void)keyCountForAccountIdentifier:completionBlock:;
- (void)signData:reason:fallback:cancel:forAccountIdentifier:completionBlock:;
- (void)signData:context:completionBlock:;
- (void)x509CertChainDataForAccountIdentifier:purpose:regenerateCerts:completionBlock:;
- (void)_sendMessage:completionBlock:;
@end
