@interface NEIKEv2SignatureHashProtocol : NSObject
@property (nonatomic) Q hashType;
- (unsigned long long)hash;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)hashType;
- (id)initWithHashType:;
@end
