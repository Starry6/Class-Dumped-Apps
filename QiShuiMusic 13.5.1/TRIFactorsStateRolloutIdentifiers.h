@interface TRIFactorsStateRolloutIdentifiers : NSObject
@property (nonatomic) NSString rolloutId;
@property (nonatomic) NSInteger deploymentId;
- (int)deploymentId;
- (id)init;
- (unsigned long long)hash;
- (id)rolloutId;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithRolloutId:deploymentId:;
- (id)copyWithZone:;
- (BOOL)isEqualToIdentifiers:;
@end
