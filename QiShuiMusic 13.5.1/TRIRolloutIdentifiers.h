@interface TRIRolloutIdentifiers : NSObject
@property (nonatomic) NSString rolloutId;
@property (nonatomic) NSInteger deploymentId;
@property (nonatomic) NSString factorPackId;
@property (nonatomic) NSString rampId;
- (id)rampId;
- (int)deploymentId;
- (id)init;
- (id)factorPackId;
- (BOOL)isEqualToRolloutIdentifiers:;
- (unsigned long long)hash;
- (id)rolloutId;
- (id)initWithRolloutId:deploymentId:factorPackId:;
- (id)initWithRolloutId:deploymentId:factorPackId:rampId:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
