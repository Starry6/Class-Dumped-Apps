@interface SCNAvoidOccluderConstraint : SCNConstraint
@property (nonatomic) <SCNAvoidOccluderConstraintDelegate> delegate;
@property (nonatomic) SCNNode target;
@property (nonatomic) Q occluderCategoryBitMask;
@property (nonatomic) double bias;
- (void)setBias:;
- (double)bias;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)initWithCoder:;
- (void)setTarget:;
- (void)encodeWithCoder:;
- (id)delegate;
- (id)target;
- (id)copyWithZone:;
- (void)setOccluderCategoryBitMask:;
- (unsigned long long)occluderCategoryBitMask;
- (void)_customEncodingOfSCNAvoidOccluderConstraint:;
- (void)_customDecodingOfSCNAvoidOccluderConstraint:;
+ (BOOL)supportsSecureCoding;
+ (id)avoidOccluderConstraint;
+ (id)avoidOccluderConstraintWithTarget:;
@end
