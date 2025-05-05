@interface NEIKEv2EncryptionProtocol : NSObject
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithEncryptionType:;
@end
