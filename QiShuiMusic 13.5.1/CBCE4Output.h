@interface CBCE4Output : NSObject
@property (nonatomic) MLMultiArray CBCE4_Q0_output;
@property (nonatomic) MLMultiArray CBCE4_Q1_output;
@property (nonatomic) MLMultiArray CBCE4_Q2_output;
@property (nonatomic) MLMultiArray CBCE4_Q3_output;
@property (nonatomic) MLMultiArray CBCE4_Q4_output;
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
- (id)initWithCBCE4_Q0_output:CBCE4_Q1_output:CBCE4_Q2_output:CBCE4_Q3_output:CBCE4_Q4_output:strength_output:uncertainty:;
- (id)CBCE4_Q0_output;
- (void)setCBCE4_Q0_output:;
- (id)CBCE4_Q1_output;
- (void)setCBCE4_Q1_output:;
- (id)CBCE4_Q2_output;
- (void)setCBCE4_Q2_output:;
- (id)CBCE4_Q3_output;
- (void)setCBCE4_Q3_output:;
- (id)CBCE4_Q4_output;
- (void)setCBCE4_Q4_output:;
@end
