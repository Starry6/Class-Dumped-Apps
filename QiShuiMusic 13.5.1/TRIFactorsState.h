@interface TRIFactorsState : NSObject
@property (nonatomic) TRIFactorsStateExperimentIdentifiers experimentIdentifiers;
@property (nonatomic) TRIFactorsStateRolloutIdentifiers rolloutIdentifiers;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)rolloutIdentifiers;
- (void)encodeWithCoder:;
- (id)experimentIdentifiers;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithPersisted:;
- (id)persisted;
+ (BOOL)supportsSecureCoding;
@end
