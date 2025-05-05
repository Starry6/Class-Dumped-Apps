@interface PLSyndicationDeleteManager : NSObject
@property (nonatomic) <PLSyndicationDeleteManagerDelegate> delegate;
@property (nonatomic) NSString logPrefix;
- (id)initWithLibraryServicesManager:;
- (id)delegate;
- (id)logPrefix;
- (void).cxx_destruct;
- (id)initWithDelegate:path:logPrefix:;
- (BOOL)_processDeletesForBundleID:unprefixedIdentifiers:;
- (BOOL)_deleteGuestAssetWithBundleID:syndicationIdentifiers:deleteCount:;
- (BOOL)_deleteConversationWithBundleID:syndicationIdentifiers:;
- (void)_inqueueProcessDeletesForBundleID:identifiers:;
- (void)processDeletesForBundleID:identifiers:completion:;
@end
