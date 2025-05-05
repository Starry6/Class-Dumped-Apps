@interface SFStepperView : UIView
@property (nonatomic) _SFDimmingButton incrementButton;
@property (nonatomic) _SFDimmingButton decrementButton;
@property (nonatomic) _SFDimmingButton resetButton;
@property (nonatomic) _SFDimmingButton doneButton;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (id)initWithCoder:;
- (id)decrementButton;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)doneButton;
- (id)incrementButton;
- (id)initWithFrame:includingResetButton:;
- (void)setLongestTitle:forButton:;
- (id)resetButton;
+ (id)_buttonsFont;
@end
