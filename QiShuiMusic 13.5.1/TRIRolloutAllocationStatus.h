@interface TRIRolloutAllocationStatus : NSObject
@property (nonatomic) NSString rolloutId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) NSString rampId;
@property (nonatomic) NSDictionary factorPackIds;
- (id)rampId;
- (int)deploymentId;
- (id)initWithRolloutId:deploymentId:rampId:factorPackIds:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)rolloutId;
- (void)encodeWithCoder:;
- (id)factorPackIds;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
