@interface BDTGKeyPair : NSObject
+ (id)cachedPrivateKeyWithType:error:;
+ (id)buidCSRStringWithSignedCSR:;
+ (id)buildCSRInfoWithPublicKeyBits:;
+ (id)buildPublicKeyInfo:;
+ (id)cachedPrivateKeyInKeyChainWithType:error:;
+ (id)cachedReePrivateKeyInSandboxWithError:;
+ (id)createCSRWithPublicKeyBits:privateKey:;
+ (id)createReePrivateKeyWithError:;
+ (id)createSignatureForData:privateKey:;
+ (id)createSignatureForString:privateKey:;
+ (id)createTeePrivateKeyWithError:;
+ (id)csrWithPrivateKey:;
+ (id)ecdhKeyWithServerCert:clientPrivateKey:error:;
+ (id)p_createPrivateKeyWithParams:error:;
+ (id)p_createSignatureForData:privateKey:error:;
+ (id)privateKeyCreateLogForType:;
+ (id)privateKeyWithType:error:;
+ (id)publicKeyBitsWithPrivateKey:error:;
+ (id)publicKeyBitsWithPublicKey:error:;
+ (id)publicKeyWithCert:error:;
+ (id)secKeyConfigForRee:;
+ (id)secKeyConfigForTee;
+ (id)tagForKeyType:;
@end
