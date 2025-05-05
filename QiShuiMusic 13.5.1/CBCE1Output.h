@interface CBCE1Output : NSObject
@property (nonatomic) MLMultiArray CBCE1_Q0_output;
@property (nonatomic) MLMultiArray CBCE1_Q1_output;
@property (nonatomic) MLMultiArray CBCE1_Q2_output;
@property (nonatomic) MLMultiArray CBCE1_Q3_output;
@property (nonatomic) MLMultiArray CBCE1_Q4_output;
@property (nonatomic) MLMultiArray strength_output;
@property (nonatomic) MLMultiArray uncertainty;
@property (nonatomic) NSSet featureNames;
- (id)uncertainty;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (void)setUncertainty:;
- (id)strength_output;
- (void)setStrength_output:;
- (id)initWithCBCE1_Q0_output:CBCE1_Q1_output:CBCE1_Q2_output:CBCE1_Q3_output:CBCE1_Q4_output:strength_output:uncertainty:;
- (id)CBCE1_Q0_output;
- (void)setCBCE1_Q0_output:;
- (id)CBCE1_Q1_output;
- (void)setCBCE1_Q1_output:;
- (id)CBCE1_Q2_output;
- (void)setCBCE1_Q2_output:;
- (id)CBCE1_Q3_output;
- (void)setCBCE1_Q3_output:;
- (id)CBCE1_Q4_output;
- (void)setCBCE1_Q4_output:;
@end
