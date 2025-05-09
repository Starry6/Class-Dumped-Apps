@interface MAAutoAssetSummary : NSObject
@property (nonatomic) MAAutoAssetSelector assetSelector;
@property (nonatomic) q assetRepresentation;
@property (nonatomic) BOOL assetWasPatched;
@property (nonatomic) BOOL assetIsStaged;
@property (nonatomic) MAAutoAssetStatus jobStatus;
@property (nonatomic) q scheduledIntervalSecs;
@property (nonatomic) q scheduledRemainingSecs;
@property (nonatomic) q pushDelaySecs;
@property (nonatomic) q activeClientCount;
@property (nonatomic) q activeMonitorCount;
@property (nonatomic) q maximumClientCount;
@property (nonatomic) q totalClientCount;
- (id)summaryPadded:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (void)summaryBuildMaxColumnStrings:;
- (void).cxx_destruct;
- (void)setAssetSelector:;
- (id)description;
- (void)setPushDelaySecs:;
- (id)assetSelector;
- (long long)pushDelaySecs;
- (id)initWithAssetSelector:withAssetRepresentation:withAssetWasPatched:withAssetIsStaged:withJobStatus:withScheduledIntervalSecs:withScheduledRemainingSecs:withPushDelaySecs:withActiveClientCount:withActiveMonitorCount:withMaximumClientCount:withTotalClientCount:;
- (id)assetRepresentationName;
- (long long)assetRepresentation;
- (void)setAssetRepresentation:;
- (BOOL)assetWasPatched;
- (void)setAssetWasPatched:;
- (BOOL)assetIsStaged;
- (void)setAssetIsStaged:;
- (id)jobStatus;
- (void)setJobStatus:;
- (long long)scheduledIntervalSecs;
- (void)setScheduledIntervalSecs:;
- (long long)scheduledRemainingSecs;
- (void)setScheduledRemainingSecs:;
- (long long)activeClientCount;
- (void)setActiveClientCount:;
- (long long)activeMonitorCount;
- (void)setActiveMonitorCount:;
- (long long)maximumClientCount;
- (void)setMaximumClientCount:;
- (long long)totalClientCount;
- (void)setTotalClientCount:;
+ (BOOL)supportsSecureCoding;
+ (id)summaryPaddedBanner:;
+ (id)summaryPaddedHeader:;
+ (id)summaryPaddedString:paddingToLenghtOfString:paddingWith:paddingBefore:;
+ (id)summaryNewMaxColumnStrings;
@end
