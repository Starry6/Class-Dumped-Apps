@interface SFRSAKeyPair : _SFKeyPair
- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:;
- (id)initRandomKeyPairWithSpecifier:privateKeyDomain:;
@end
