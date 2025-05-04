@interface AWESearchEasterEggAnimationView : UIView
@property (nonatomic) AWESearchEasterEggModel model;
@property (nonatomic) NSArray animationGroups;
@property (nonatomic) NSArray animationViews;
- (void)configWithModel:;
- (void)__prepareElements;
- (id)animationViews;
- (id)animationGroups;
- (void)setAnimationGroups:;
- (void)setAnimationViews:;
- (void)setModel:;
- (void)remove;
- (void)play;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
@end
