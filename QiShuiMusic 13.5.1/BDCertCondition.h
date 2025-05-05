@interface BDCertCondition : NSObject
@property (nonatomic) BDCertConditionModel model;
- (id)extractConfigParams;
- (void)parseParams:;
- (id)validateCertUnit:;
- (id)model;
- (void)setModel:;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
