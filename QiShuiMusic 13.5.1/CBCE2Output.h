@interface CBCE2Output : NSObject
@property (nonatomic) MLMultiArray CBCE2_Q0_output;
@property (nonatomic) MLMultiArray CBCE2_Q1_output;
@property (nonatomic) MLMultiArray CBCE2_Q2_output;
@property (nonatomic) MLMultiArray CBCE2_Q3_output;
@property (nonatomic) MLMultiArray CBCE2_Q4_output;
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
- (id)initWithCBCE2_Q0_output:CBCE2_Q1_output:CBCE2_Q2_output:CBCE2_Q3_output:CBCE2_Q4_output:strength_output:uncertainty:;
- (id)CBCE2_Q0_output;
- (void)setCBCE2_Q0_output:;
- (id)CBCE2_Q1_output;
- (void)setCBCE2_Q1_output:;
- (id)CBCE2_Q2_output;
- (void)setCBCE2_Q2_output:;
- (id)CBCE2_Q3_output;
- (void)setCBCE2_Q3_output:;
- (id)CBCE2_Q4_output;
- (void)setCBCE2_Q4_output:;
@end
