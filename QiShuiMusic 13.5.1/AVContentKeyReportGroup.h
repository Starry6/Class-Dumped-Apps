@interface AVContentKeyReportGroup : NSObject
@property (nonatomic) NSData contentProtectionSessionIdentifier;
- (void)dealloc;
- (void)expire;
- (id)_contentKeyBoss;
- (id)contentProtectionSessionIdentifier;
- (void)processContentKeyRequestWithIdentifier:initializationData:options:;
- (BOOL)hasProtector;
- (id)copyCryptorForCryptKeyAttributes:;
- (id)_contentKeySession;
- (id)cryptorOptionsForIdentifier:initializationData:formatDescription:hlsMethod:;
- (void)failProcessingContentKeyRequestWithIdentifier:initializationData:error:;
- (id)_processContentKeyRequestWithIdentifier:contentIdentifier:keyIDFromInitializationData:initializationData:options:;
- (id)_processContentKeyRequestWithKeyRequestFromPSSH:decryptFormatType:initializationData:options:;
- (BOOL)_associateRequestWithGroupWithRequestID:error:;
- (BOOL)associateContentKeyRequest:;
- (BOOL)_destroyContentKeyGroupWithError:;
- (id)_figContentKeySession;
- (id)createCryptorIfNecessaryForIdentifier:initializationData:formatDescription:hlsMethod:error:;
- (id)copyCryptorForIdentifier:initializationData:;
- (id)initWithKeySystem:keySession:contentKeyBoss:useContentKeyBoss:groupID:storageDirectoryAtURL:;
- (void)createProtectorSessionIdentifierIfNecessary;
- (int)configureAppIdentifier:;
- (BOOL)_setAuthorizationToken:forIdentifier:error:;
- (int)externalProtectionStatusForCryptor:withDisplays:;
@end
