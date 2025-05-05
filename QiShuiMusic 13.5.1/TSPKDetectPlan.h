@interface TSPKDetectPlan : NSObject
@property (nonatomic) TSPKDetectPlanModel model;
@property (nonatomic) TSPKDetectTrigger detectTrigger;
@property (nonatomic) <TSPKDetectPlanDelegate> delegate;
- (id)detectTrigger;
- (void)handleDetectTriggerWithEvent:;
- (void)initDetectTrigger;
- (id)initWithPlanModel:;
- (void)setDetectTrigger:;
- (void)updateWithPlanModel:;
- (id)model;
- (void)setModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
