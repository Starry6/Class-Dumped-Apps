@interface SUCoreEventReporterActive : NSObject
@property (nonatomic) NSURL serverURL;
@property (nonatomic) q attemptedSendCount;
@property (nonatomic) q failedSendCount;
@property (nonatomic) q discoveredRunningCount;
@property (nonatomic) q discoveredSuspendedCount;
@property (nonatomic) q discoveredCancelingCount;
- (id)copy;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)serverURL;
- (void)setServerURL:;
- (id)initWithServerURL:;
- (id)toArchivedData;
- (id)initFromArchivedData:;
- (long long)attemptedSendCount;
- (void)setAttemptedSendCount:;
- (long long)failedSendCount;
- (void)setFailedSendCount:;
- (long long)discoveredRunningCount;
- (void)setDiscoveredRunningCount:;
- (long long)discoveredSuspendedCount;
- (void)setDiscoveredSuspendedCount:;
- (long long)discoveredCancelingCount;
- (void)setDiscoveredCancelingCount:;
+ (BOOL)supportsSecureCoding;
@end
