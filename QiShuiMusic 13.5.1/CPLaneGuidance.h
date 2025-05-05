@interface CPLaneGuidance : NSObject
@property (nonatomic) S componentID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) S componentID;
@property (nonatomic) S index;
@property (nonatomic) NSArray lanes;
@property (nonatomic) NSArray instructionVariants;
- (id)init;
- (id)initWithCoder:;
- (unsigned short)index;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)lanes;
- (unsigned short)componentID;
- (void)setComponentID:;
- (id)instructionVariants;
- (void)setInstructionVariants:;
- (void)setLanes:;
+ (BOOL)supportsSecureCoding;
+ (id)accNavParameters;
@end
