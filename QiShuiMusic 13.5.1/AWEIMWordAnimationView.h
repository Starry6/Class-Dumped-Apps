@interface AWEIMWordAnimationView : UIView
@property (nonatomic) IESIMSaaSMessageShowAnimationModel model;
@property (nonatomic) NSArray animationGroups;
@property (nonatomic) NSArray animationViews;
@property (nonatomic) NSString animateID;
- (id)animationGroups;
- (id)animateID;
- (id)animationViews;
- (void)configWithModel:;
- (void)p_prepareElements;
- (void)setAnimateID:;
- (void)setAnimationGroups:;
- (void)setAnimationViews:;
- (id)model;
- (void)remove;
- (void)setModel:;
- (void)play;
- (void).cxx_destruct;
@end
