@interface SFExperimentTriggeredFeedback : SFFeedback
@property (nonatomic) SFCounterfactualInfo counterfactual;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)counterfactual;
- (void)setCounterfactual:;
- (id)initWithCfDiffered:cfUsed:cfError:;
+ (BOOL)supportsSecureCoding;
@end
