@interface CPLExpungeableResourceState : NSObject
@property (nonatomic) Q resourceType;
@property (nonatomic) Q expungedState;
@property (nonatomic) NSDate expungedDate;
- (unsigned long long)resourceType;
- (void)setResourceType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setExpungedDate:;
- (void)setExpungedState:;
- (id)expungedDate;
- (unsigned long long)expungedState;
+ (BOOL)supportsSecureCoding;
+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:;
@end
