@interface IDSRemoteCredential : NSObject
@property (nonatomic) BOOL wantsRetries;
- (void)_sendMessage:withCompletionBlock:;
- (BOOL)_connect;
- (void)dealloc;
- (void)_disconnected;
- (BOOL)_disconnect;
- (void).cxx_destruct;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:;
- (void)fetchRemoteAccountsOfServiceTypes:withCompletionBlock:;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:;
- (void)requestIDStatusForURIs:service:lightQuery:allowQuery:completionBlock:;
- (void)sendAccountSyncMessage:messageID:queueOneIdentifier:allowCloudFallback:completionBlock:;
- (BOOL)wantsRetries;
- (void)setWantsRetries:;
@end
