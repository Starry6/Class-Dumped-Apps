@interface ICDelegationServicePairingSession : NSObject
@property (nonatomic) <ICDelegationServicePairingSessionDelegate> delegate;
@property (nonatomic) q role;
@property (nonatomic) ICDelegationServiceSecuritySettings securitySettings;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)role;
- (id)securitySettings;
- (id)initWithRole:securitySettings:;
- (void)prepareEncryptedSessionWithCompletionHandler:;
- (void)receievedData:;
- (void)getDecryptedDataForEncryptedData:withCompletionHandler:;
- (void)getEncryptedDataForData:withCompletionHandler:;
- (id)_encryptedDataForData:;
- (void)_handlePairingSessionCompletionWithError:;
- (BOOL)_deriveEncryptionKeysReturningError:;
- (void)_receivedData:;
- (void)_sendData:withCompletionHandler:;
@end
