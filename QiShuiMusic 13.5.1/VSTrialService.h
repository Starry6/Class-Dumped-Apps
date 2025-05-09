@interface VSTrialService : NSObject
@property (nonatomic) TRIClient triClient;
@property (nonatomic) NSArray cachedVoices;
@property (nonatomic) NSArray cachedResources;
@property (nonatomic) <TRINotificationToken> trialNotificationToken;
@property (nonatomic) NSObject<OS_dispatch_queue> downloadQueue;
@property (nonatomic) NSLock clientRefreshLock;
- (id)downloadQueue;
- (void)setDownloadQueue:;
- (id)selectVoiceResourceWithLanguage:;
- (id)init;
- (void)dealloc;
- (void)setCachedVoices:;
- (void)setClientRefreshLock:;
- (void)setTriClient:;
- (id)clientRefreshLock;
- (id)_definedVoicesWithLanguage:name:type:footprint:;
- (id)_directoryOfFactorName:;
- (void)downloadVoiceResource:withOptions:progress:completion:;
- (id)definedVoicesWithLanguage:name:type:footprint:;
- (id)cachedVoices;
- (id)cachedResources;
- (void)_downloadFactorName:withOptions:progress:completion:;
- (void)setTrialNotificationToken:;
- (id)selectVoiceWithLanguage:name:type:footprint:;
- (void)removeVoiceResource:completion:;
- (void)downloadNamespaceImmediatelyIfNeededWithOption:completion:;
- (void)downloadVoice:withOptions:progress:completion:;
- (id)_fileOfFactorName:;
- (id)triClient;
- (id)definedVoicesWithAssets:;
- (void).cxx_destruct;
- (void)refreshTrialClient;
- (id)definedVoiceResourcesWithLanguage:;
- (void)setCachedResources:;
- (id)trialNotificationToken;
- (void)removeVoice:completion:;
- (void)_removeAssetWithFactorName:completion:;
+ (id)sharedService;
+ (id)versionFactorNameWithFactorName:;
+ (id)defaultDownloadOptions;
@end
