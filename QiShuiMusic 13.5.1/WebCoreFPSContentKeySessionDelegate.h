@interface WebCoreFPSContentKeySessionDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)contentKeySession:didProvideContentKeyRequest:;
- (void)invalidate;
- (id)initWithParent:;
- (void)contentKeySession:didProvidePersistableContentKeyRequest:;
- (void)contentKeySession:contentKeyRequest:didFailWithError:;
- (BOOL)contentKeySession:shouldRetryContentKeyRequest:reason:;
- (void)contentKeySession:contentKeyRequestDidSucceed:;
- (void)contentKeySession:externalProtectionStatusDidChangeForContentKeyRequest:;
- (void)contentKeySession:didProvideRenewingContentKeyRequest:;
- (void)contentKeySession:didUpdatePersistableContentKey:forContentKeyIdentifier:;
- (void)contentKeySession:contentProtectionSessionIdentifierDidChangeForReportGroup:;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:;
- (void)contentKeySession:didProvideContentKeyRequests:forInitializationData:;
- (void)contentKeySession:contentProtectionSessionIdentifierDidChangeForKeyGroup:;
@end
