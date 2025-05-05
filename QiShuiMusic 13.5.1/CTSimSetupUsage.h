@interface CTSimSetupUsage : NSObject
@property (nonatomic) BOOL inBuddy;
@property (nonatomic) Q transferablePlans;
@property (nonatomic) Q selectedTransferablePlans;
@property (nonatomic) Q alsPlans;
@property (nonatomic) Q selectedAlsPlans;
@property (nonatomic) Q odaPlans;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithInBuddy:transferablePlans:selectedTransferablePlans:alsPlans:selectedAlsPlans:odaPlans:;
- (BOOL)inBuddy;
- (void)setInBuddy:;
- (unsigned long long)transferablePlans;
- (void)setTransferablePlans:;
- (unsigned long long)selectedTransferablePlans;
- (void)setSelectedTransferablePlans:;
- (unsigned long long)alsPlans;
- (void)setAlsPlans:;
- (unsigned long long)selectedAlsPlans;
- (void)setSelectedAlsPlans:;
- (unsigned long long)odaPlans;
- (void)setOdaPlans:;
+ (BOOL)supportsSecureCoding;
@end
