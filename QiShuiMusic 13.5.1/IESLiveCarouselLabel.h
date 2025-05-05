@interface IESLiveCarouselLabel : UIView
@property (nonatomic) UILabel currentLabel;
@property (nonatomic) UILabel toDisplayLabel;
- (void)changeToDisplayLabel:withDirection:completion:;
- (void)setToDisplayLabel:;
- (id)toDisplayLabel;
- (void)transitionFromLabel:toLabel:completion:;
- (id)initWithLabel:;
- (void).cxx_destruct;
- (void)setupViews;
- (id)currentLabel;
- (void)setCurrentLabel:;
@end
