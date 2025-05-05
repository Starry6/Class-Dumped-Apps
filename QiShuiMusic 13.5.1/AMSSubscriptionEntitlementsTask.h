@interface AMSSubscriptionEntitlementsTask : AMSTask
@property (nonatomic) q cachePolicy;
@property (nonatomic) BOOL extendedCarrierCheck;
@property (nonatomic) q mediaType;
- (long long)mediaType;
- (void)setMediaType:;
- (void)setCachePolicy:;
- (long long)cachePolicy;
- (id)initWithMediaType:;
- (id)performExternalLookup;
- (id)_fetchEntitlementsFromASD;
- (id)_fetchEntitlementsFromIC;
- (id)_queryCachedASDSubscriptionForSegment:controller:reloadIfNeeded:;
- (id)_reloadASDSubscriptionForSegment:controller:;
- (id)_resultFromASDEntitlements:;
- (id)_resultFromICResponse:;
- (BOOL)_shouldIgnoreCaches;
- (BOOL)_shouldIgnoreRemoteData;
- (BOOL)extendedCarrierCheck;
- (void)setExtendedCarrierCheck:;
+ (id)updateCacheForMediaType:account:data:;
+ (unsigned long long)_segmentForMediaType:error:;
@end
