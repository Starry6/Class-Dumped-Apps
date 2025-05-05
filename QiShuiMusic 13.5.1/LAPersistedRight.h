@interface LAPersistedRight : LARight
@property (nonatomic) LAPrivateKey key;
@property (nonatomic) LASecret secret;
- (id)key;
- (void).cxx_destruct;
- (id)secret;
- (id)initWithIdentifier:accessKey:privateKeys:secrets:;
@end
