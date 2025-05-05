@interface WBSTranslationAvailability : NSObject
@property (nonatomic) NSArray userPreferredTargetLocales;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (void)_updateCachedValues;
- (void)_didUpdateSupportedRegionAndLocalePairs;
- (void)isTranslationSupportedForCurrentRegionWithCompletionHandler:;
- (void)supportedLocalePairsWithCompletionHandler:;
- (id)userPreferredTargetLocales;
- (id)_initWithAvailabilityProvider:;
- (void)getTranslationAvailabilityWithCompletionHandler:;
- (void)getAvailableLocalePairsWithCompletionHandler:;
- (void)getAllTargetLocalesInUserPreferredOrderWithCompletionHandler:;
+ (id)sharedAvailability;
@end
