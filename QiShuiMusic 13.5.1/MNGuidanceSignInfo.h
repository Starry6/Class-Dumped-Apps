@interface MNGuidanceSignInfo : NSObject
@property (nonatomic) MNGuidanceSignDescription primarySign;
@property (nonatomic) MNGuidanceSignDescription secondarySign;
@property (nonatomic) Q stepIndex;
@property (nonatomic) double primaryDistance_SIRI_USE_ONLY;
@property (nonatomic) double secondaryDistance_SIRI_USE_ONLY;
@property (nonatomic) double timeUntilPrimarySign_SIRI_USE_ONLY;
@property (nonatomic) double timeUntilSecondarySign_SIRI_USE_ONLY;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)stepIndex;
- (id)initWithPrimarySign:secondarySign:stepIndex:primaryDistance:secondaryDistance:timeUntilPrimarySign:timeUntilSecondarySign:;
- (id)primarySign;
- (id)secondarySign;
- (double)primaryDistance_SIRI_USE_ONLY;
- (double)secondaryDistance_SIRI_USE_ONLY;
- (double)timeUntilPrimarySign_SIRI_USE_ONLY;
- (double)timeUntilSecondarySign_SIRI_USE_ONLY;
+ (BOOL)supportsSecureCoding;
@end
