@interface TKLocalSEPRefKey : TKLocalSEPKey
@property (nonatomic) ^{aks_ref_key_s=} AKSRefKey;
- (id)objectID;
- (void)dealloc;
- (long long)keySize;
- (id)_initWithKeyType:keySize:accessControl:options:authContext:caller:error:;
- (id)publicKeyWithError:;
- (id)signDigest:error:;
- (id)attestKey:nonce:error:;
- (id)recryptData:attributes:error:;
- (id)_initWithObjectID:authContext:caller:error:;
- (BOOL)deleteWithError:;
- (id)keyType;
- (id)description;
- (id)computeSharedSecret:error:;
- (id)AKSRefKey;
@end
