@interface TKRemoteSEPKey : TKSEPKey
@property (nonatomic) @ keyID;
- (id)objectID;
- (id)accessControl;
- (BOOL)systemKey;
- (long long)keySize;
- (id)publicKeyWithError:;
- (id)keyID;
- (id)_initWithObjectID:authContext:error:;
- (id)_initWithKeyType:keySize:accessControl:options:authContext:error:;
- (id)signDigest:error:;
- (id)withError:invoke:;
- (id)attestKey:nonce:error:;
- (BOOL)lifetimeControlWithType:error:;
- (id)recryptData:attributes:error:;
- (BOOL)processServerAtributes:error:;
- (void).cxx_destruct;
- (BOOL)deleteWithError:;
- (id)keyType;
- (id)computeSharedSecret:error:;
@end
