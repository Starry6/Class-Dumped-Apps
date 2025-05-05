@interface CBCE3Output : NSObject
@property (nonatomic) MLMultiArray CBCE3_Q0_output;
@property (nonatomic) MLMultiArray CBCE3_Q1_output;
@property (nonatomic) MLMultiArray CBCE3_Q2_output;
@property (nonatomic) MLMultiArray CBCE3_Q3_output;
@property (nonatomic) MLMultiArray CBCE3_Q4_output;
@property (nonatomic) MLMultiArray strength_output;
@property (nonatomic) MLMultiArray uncertainty;
@property (nonatomic) NSSet featureNames;
- (id)uncertainty;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (void)setUncertainty:;
- (id)initWithCBCE3_Q0_output:CBCE3_Q1_output:CBCE3_Q2_output:CBCE3_Q3_output:CBCE3_Q4_output:strength_output:uncertainty:;
- (id)CBCE3_Q0_output;
- (void)setCBCE3_Q0_output:;
- (id)CBCE3_Q1_output;
- (void)setCBCE3_Q1_output:;
- (id)CBCE3_Q2_output;
- (void)setCBCE3_Q2_output:;
- (id)CBCE3_Q3_output;
- (void)setCBCE3_Q3_output:;
- (id)CBCE3_Q4_output;
- (void)setCBCE3_Q4_output:;
- (id)strength_output;
- (void)setStrength_output:;
@end
