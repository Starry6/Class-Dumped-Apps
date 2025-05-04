@interface AWEIMSwipeOptions : NSObject
@property (nonatomic) q transitionStyle;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) double maximumButtonWidth;
@property (nonatomic) double minimumButtonWidth;
@property (nonatomic) double buttonPadding;
@property (nonatomic) double buttonSpacing;
@property (nonatomic) AWEIMSwipeExpansionStyle expansionStyle;
- (void)setExpansionStyle:;
- (void)setMinimumButtonWidth:;
- (double)minimumButtonWidth;
- (double)maximumButtonWidth;
- (id)expansionStyle;
- (void)setMaximumButtonWidth:;
- (void)setTransitionStyle:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (double)buttonSpacing;
- (long long)transitionStyle;
- (double)buttonPadding;
- (void)setButtonPadding:;
- (void)setButtonSpacing:;
@end
