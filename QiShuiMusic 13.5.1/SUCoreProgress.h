@interface SUCoreProgress : NSObject
@property (nonatomic) NSString phase;
@property (nonatomic) BOOL isStalled;
@property (nonatomic) float portionComplete;
@property (nonatomic) q totalWrittenBytes;
@property (nonatomic) q totalExpectedBytes;
@property (nonatomic) double estimatedTimeRemaining;
- (id)phase;
- (void)setPhase:;
- (void)setTotalExpectedBytes:;
- (id)copy;
- (long long)totalExpectedBytes;
- (id)initWithCoder:;
- (void)setEstimatedTimeRemaining:;
- (void)encodeWithCoder:;
- (double)estimatedTimeRemaining;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isStalled;
- (BOOL)isEqual:;
- (long long)totalWrittenBytes;
- (void)setTotalWrittenBytes:;
- (void)setIsStalled:;
- (id)initWithPhase:isStalled:portionComplete:remaining:;
- (id)initWithPhase:isStalled:portionComplete:totalWrittenBytes:totalExpectedBytes:remaining:;
- (BOOL)sameProgress:isStalled:portion:remaining:;
- (float)portionComplete;
- (void)setPortionComplete:;
+ (BOOL)supportsSecureCoding;
@end
