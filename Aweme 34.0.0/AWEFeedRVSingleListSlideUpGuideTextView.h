@interface AWEFeedRVSingleListSlideUpGuideTextView : UIView
@property (nonatomic) UIView lineView;
@property (nonatomic) UIView textViewContainer;
@property (nonatomic) AWEGradientView leftGradientView;
@property (nonatomic) AWEGradientView rightGradientView;
@property (nonatomic) UILabel titleLabel;
- (void)awe_themeWillChange:;
- (id)leftGradientView;
- (id)rightGradientView;
- (void)setLeftGradientView:;
- (void)setRightGradientView:;
- (double)textViewHeight;
- (void)updateUIToTextView:;
- (id)init;
- (id)gradientColors;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
- (id)textViewContainer;
- (void)setTextViewContainer:;
@end
