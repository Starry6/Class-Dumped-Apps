@interface MAAutoAssetLockTracker : NSObject
@property (nonatomic) MAAutoAssetLockReason clientLockReason;
@property (nonatomic) MAAutoAssetPolicy lockUsagePolicy;
@property (nonatomic) q activeLockCount;
@property (nonatomic) q maximumLockCount;
@property (nonatomic) q totalLockCount;
@property (nonatomic) q continueCount;
@property (nonatomic) NSDate firstLockTimestamp;
@property (nonatomic) NSDate lastRefreshTimestamp;
- (void)setContinueCount:;
- (void)setMaximumLockCount:;
- (id)summaryPadded:;
- (long long)totalLockCount;
- (id)copy;
- (long long)maximumLockCount;
- (id)clientLockReason;
- (id)firstLockTimestamp;
- (long long)continueCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (id)initForClientLockReason:lockingWithUsagePolicy:;
- (void)summaryBuildMaxColumnStrings:;
- (void).cxx_destruct;
- (long long)activeLockCount;
- (void)setFirstLockTimestamp:;
- (id)description;
- (void)setTotalLockCount:;
- (id)lockUsagePolicy;
- (void)setLockUsagePolicy:;
- (void)setLastRefreshTimestamp:;
- (void)setActiveLockCount:;
- (id)lastRefreshTimestamp;
+ (BOOL)supportsSecureCoding;
+ (id)summaryPaddedBanner:;
+ (id)summaryPaddedHeader:;
+ (id)summaryPaddedString:paddingToLenghtOfString:paddingWith:paddingBefore:;
+ (id)summaryNewMaxColumnStrings;
@end
