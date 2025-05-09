@interface ASDJobSchedulerJobMetadata : NSObject
@property (nonatomic) NSNumber accountIdentifier;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSNumber externalPriority;
@property (nonatomic) NSNumber itemID;
@property (nonatomic) NSString jobState;
@property (nonatomic) NSString jobType;
@property (nonatomic) NSError lastError;
@property (nonatomic) NSNumber lastSoftFailureTimestamp;
@property (nonatomic) NSNumber priority;
@property (nonatomic) NSNumber priorityBucket;
@property (nonatomic) NSString skippedReason;
@property (nonatomic) q softFailureCount;
@property (nonatomic) NSNumber softFailureTimeout;
@property (nonatomic) NSNumber timestamp;
- (void)setPriority:;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (id)itemID;
- (id)jobType;
- (id)initWithCoder:;
- (void)setItemID:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (id)timestamp;
- (void)setLastError:;
- (id)description;
- (id)bundleID;
- (void)setJobType:;
- (id)lastError;
- (id)copyWithZone:;
- (void)setBundleID:;
- (id)priority;
- (id)externalPriority;
- (void)setExternalPriority:;
- (id)jobState;
- (void)setJobState:;
- (id)lastSoftFailureTimestamp;
- (void)setLastSoftFailureTimestamp:;
- (id)priorityBucket;
- (void)setPriorityBucket:;
- (id)skippedReason;
- (void)setSkippedReason:;
- (long long)softFailureCount;
- (void)setSoftFailureCount:;
- (id)softFailureTimeout;
- (void)setSoftFailureTimeout:;
+ (BOOL)supportsSecureCoding;
@end
