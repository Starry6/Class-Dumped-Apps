@interface AVContentKeySession : NSObject
@property (nonatomic) BOOL internal;
@property (nonatomic) AVContentKeyReportGroup defaultContentKeyGroup;
@property (nonatomic) <AVContentKeySessionDelegate> delegate;
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) NSURL storageURL;
@property (nonatomic) NSString keySystem;
@property (nonatomic) NSData contentProtectionSessionIdentifier;
- (int)setAppIdentifier:;
- (id)init;
- (void)dealloc;
- (void)expire;
- (BOOL)isInternal;
- (void)setDelegate:;
- (id)_internalQueue;
- (id)_weakReference;
- (id)delegateQueue;
- (id)storageURL;
- (id)delegate;
- (id)description;
- (void)setDelegate:queue:;
- (void)_willDeallocOrFinalize;
- (id)keySystem;
- (id)_contentKeyGroups;
- (id)initWithStorageDirectoryAtURL:;
- (void)didProvideKeyRequestWithBoss:keySpecifier:requestID:renewalRequest:;
- (void)removeResourcesForID:;
- (void)contentKeyRequestDidSucceedWithBoss:keySpecifier:requestID:cryptor:;
- (void)externalProtectionStateChangedCallbackWithBoss:keySpecifier:;
- (long long)defaultGroupID;
- (id)initWithKeySystem:storageDirectoryAtURL:legacyWebKitCompatibilityMode:;
- (void)addContentKeyRecipient:;
- (void)removeContentKeyRecipient:;
- (id)contentKeyRecipients;
- (id)contentProtectionSessionIdentifier;
- (void)processContentKeyRequestForSinf:initializationData:groupID:options:;
- (void)processContentKeyRequestForPSSHEntries:initializationData:groupID:options:;
- (void)processContentKeyRequestForTransportStreamWithCodecType:initializationData:groupID:options:;
- (void)_processContentKeyRequestWithIdentifier:initializationData:options:groupID:;
- (void)processContentKeyRequestWithIdentifier:initializationData:options:;
- (void)renewExpiringResponseDataForContentKeyRequest:;
- (void)makeSecureTokenForExpirationDateOfPersistableContentKey:completionHandler:;
- (void)invalidatePersistableContentKey:options:completionHandler:;
- (void)invalidateAllPersistableContentKeysForApp:options:completionHandler:;
- (void)_handleSecureStopDidFinalizeRecordCallback;
- (void)_handleExternalProtectionStateChangedCallbackForCryptKeyIdentifier:;
- (void)_setContentKeyRequest:forCryptorUUID:cryptorKeyRequestID:;
- (id)_contentKeyRequestForCryptorUUID:cryptorKeyRequestID:;
- (void)_removeContentKeyRequestForCryptorUUID:cryptorKeyRequestID:;
- (void)_setWeakReferenceForContentKeyRequest:withCryptorUUID:;
- (void)_invokeDelegateCallbackWithBlock:synchronouslyWhenDelegateQueueIsNULL:;
- (void)_handleKeyResponseError:forCryptorUUID:andCryptorKeyRequestID:;
- (void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:andCryptorKeyRequestID:;
- (void)_handleUpdateToPersistentKey:forKeyIdentifier:;
- (void)_handleContentProtectionSessionIdentifierDidChange:;
- (BOOL)clientCanReceivePersistableContentKeyRequest;
- (void)issueContentKeyRequests:forInitializationData:;
- (void)issueContentKeyRequest:toDelegateWithCallbackSelector:;
- (void)issueContentKeyRequest:;
- (void)issuePersistableContentKeyRequest:;
- (void)issueRenewableContentKeyRequest:;
- (void)issueContentKeyRequestWithCustomURLHandler:identifier:requestInfo:requestID:providesPersistableKey:;
- (void)issueContentKeyRequestWithPreloadingRequestOptions:identifier:initializationData:providesPersistableKey:;
- (void)contentKeyRequestDidProduceContentKey:;
- (void)issuePersistableContentKeyRequestForKeySpecifier:initializationData:keyIDFromInitializationData:contentIdentifier:requestID:preloadingRequestOptions:identifier:;
- (id)keyRequestByID:;
- (void)trackRequest:byRequestID:;
- (id)initWithKeySystem:storageDirectoryAtURL:internal:;
- (BOOL)hasProtector;
- (id)issueContentKeyRequestForInitializationData:;
- (void)_sendFinishLoadingForPreloadedKeyRequest:withRequestID:fromHandler:error:;
- (id)copyCryptorForInitializationData:;
- (BOOL)copyCryptorForFormatDescription:cryptorOut:errorOut:;
- (id)createCryptorIfNecessaryForInitializationData:formatDescription:error:;
- (id)copyCryptorForCryptKeyAttributes:;
- (void)_handleRequest:withRequestID:fromHandler:willHandleRequest:;
- (int)createAndInstallCustomURLHandlerForAsset:outHandler:;
- (id)defaultContentKeyGroup;
- (id)makeContentKeyGroup;
- (long long)_processContentKeyRequestWithIdentifier:encryptionMode:supportedProtocolVersions:groupID:error:;
- (long long)_renewKeyWithIdentifier:encryptionMode:error:;
- (BOOL)_makeContentKeyGroupWithIDOut:error:;
+ (id)contentKeySessionWithKeySystem:;
+ (id)copyDefaultSecureStopManagerForAppIdentifier:storageDirectoryAtURL:;
+ (id)contentKeySessionWithLegacyWebKitCompatibilityModeAndKeySystem:storageDirectoryAtURL:;
+ (id)contentKeySessionWithKeySystem:storageDirectoryAtURL:;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:storageDirectoryAtURL:;
+ (void)removePendingExpiredSessionReports:withAppIdentifier:storageDirectoryAtURL:;
+ (id)_uniqueIDForCyptorUUID:cryptorKeyRequestID:;
@end
