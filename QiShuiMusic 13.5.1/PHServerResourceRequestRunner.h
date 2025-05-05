@interface PHServerResourceRequestRunner : NSObject
@property (nonatomic) NSString taskIdentifier;
- (id)taskIdentifier;
- (void)dealloc;
- (void)setState:;
- (long long)state;
- (void).cxx_destruct;
- (id)initWithTaskIdentifier:;
- (id)_assetAndRelatedObjectsFromAssetObjectIDURL:inManagedObjectContext:error:;
- (void)_safeReply:;
- (void)_cancelWithReply:;
- (void)_handleProgress:;
- (id)makeResourceAvailableWithRequest:library:clientBundleID:reply:;
- (void)makeResourceUnavailableWithRequest:library:;
- (id)_applyCorrectionsToAssetObjectIDURL:resourceIdentity:errorCodes:library:reply:;
- (id)applyResourceScopeCorrectionsWithRequest:errorCodes:library:reply:;
- (id)applyAssetScopeCorrectionsWithRequest:errorCodes:library:reply:;
- (BOOL)_resourceQualifiesForCacheMetricsCollection:isLivePhoto:;
- (void)_replyToVideoRequestWithURL:mediaItemMakerData:mutableInfo:internalInfo:error:pathForAdjustmentFileIfNeeded:reply:;
- (id)chooseVideoWithRequest:library:clientBundleID:reply:;
- (id)mutableStreamingHintsForAVAssetProxy:;
- (id)_avAssetProxyForOutOfBandHintsAboutAssetForResource:;
- (id)_urlByAttachingOutOfBandHintsToVideoURL:assetProxy:signpostId:hintsBase64String:;
@end
