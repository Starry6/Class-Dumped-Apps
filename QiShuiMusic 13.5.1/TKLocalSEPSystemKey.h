@interface TKLocalSEPSystemKey : TKLocalSEPKey
- (id)objectID;
- (BOOL)systemKey;
- (long long)keySize;
- (id)publicKeyWithError:;
- (id)_initWithObjectID:authContext:caller:isIDUnknown:error:;
- (id)signDigest:error:;
- (id)attestKey:nonce:error:;
- (BOOL)lifetimeControlWithType:error:;
- (id)keyType;
- (id)description;
+ (BOOL)hasSystemKey:ACMHandle:;
+ (void)initSystemKeyIDs;
@end
