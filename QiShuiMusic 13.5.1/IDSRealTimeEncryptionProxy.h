@interface IDSRealTimeEncryptionProxy : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAccount:;
- (void)setDelegate:queue:;
- (void)sendPrekeyToGroup:;
- (void)requestPublicKeys;
- (void)sendMasterKeyMaterialToGroup:;
- (void)requestMasterKeyMaterialForGroup:;
- (void)sendMKMRecoveryRequestToGroup:;
- (void)resetKeysForGroup:;
@end
