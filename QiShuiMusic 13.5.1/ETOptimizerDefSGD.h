@interface ETOptimizerDefSGD : ETOptimizerDef
@property (nonatomic) float lr;
@property (nonatomic) float lr_decay_epoch;
@property (nonatomic) float momentum;
@property (nonatomic) float weight_decay;
- (id)init;
- (float)momentum;
- (void)setMomentum:;
- (float)lr;
- (void)setLr:;
- (float)lr_decay_epoch;
- (void)setLr_decay_epoch:;
- (float)weight_decay;
- (void)setWeight_decay:;
@end
