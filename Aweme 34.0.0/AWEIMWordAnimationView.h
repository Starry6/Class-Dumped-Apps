@interface AWEIMWordAnimationView : UIView
@property (nonatomic) AWEIMMessageShowAnimationModel model;
@property (nonatomic) NSArray animationGroups;
@property (nonatomic) NSArray animationViews;
@property (nonatomic) NSString animateID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithModel:;
- (void)setAnimateID:;
- (id)animationViews;
- (id)animationGroups;
- (void)setAnimationGroups:;
- (void)setAnimationViews:;
- (id)animateID;
- (void)p_prepareElements;
- (void)setModel:;
- (void)remove;
- (void)play;
- (id)model;
- (void).cxx_destruct;
@end
