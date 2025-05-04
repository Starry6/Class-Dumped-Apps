@interface AWEWatchLaterWatchedVideoEntranceView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView arrowView;
- (double)iconViewWidth;
- (double)arrowViewWidth;
- (void)updateTextLabelWithText:;
- (id)textLabel;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setTextLabel:;
- (void)setupUI;
@end
