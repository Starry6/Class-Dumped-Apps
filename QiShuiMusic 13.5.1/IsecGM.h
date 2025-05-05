@interface IsecGM : NSObject
- (id)decryptMessage:withError:;
- (id)encryptMessage:withPublicKey:withError:;
- (id)sm2EncryptMessage:withPublicKey:withDerEncode:withError:;
- (id)sm3HMACMessage:withKey:withError:;
- (id)sm4DecryptMessage:withKey:withIV:withMode:withPadding:withError:;
- (id)sm4EncryptMessage:withKey:withIV:withMode:withPadding:withError:;
- (id)sm4GenerateKeyWithError:;
- (BOOL)isNullNSString:;
- (id)randomGenerateWithLength:withError:;
- (id)sm2GenerateKeyWithDerEncode:withError:;
- (id)sm2DecryptMessage:withPrivateKey:withError:;
- (id)sm2SignMessage:withPrivateKey:withDerEncode:withError:;
- (BOOL)sm2VerifyMessage:withPublicKey:withSign:withError:;
- (id)sm3DigestMessage:withError:;
@end
