@interface IESLiveSaaSFeaturesInfoWrapper : NSObject
@property (nonatomic) NSArray selectedFeatures;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAnchorSelected;
- (BOOL)isBigPartySelected;
- (BOOL)isChargeSelected;
- (BOOL)isFeatureSeletionV2;
- (BOOL)isHostFollowSelected;
- (BOOL)isIntimateChatSelected;
- (BOOL)isPangolinDistributionEntranceSelected;
- (BOOL)isRegionRankListSelected;
- (BOOL)isScreencastLiveSelected;
- (BOOL)isVoiceDiscussSelected;
- (BOOL)isWatchAfterAuthorizationSelected;
- (id)realSelectedFeatures;
- (id)selectedFeatures;
- (void)setSelectedFeatures:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsFeature:;
+ (void)addSubspec:;
@end
