@interface OBIconTextView : UIView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) {CGSize=dd} iconSize;
@property (nonatomic) UITextView textView;
@property (nonatomic) double padding;
@property (nonatomic) double baselineFromBoundsTop;
- (id)textView;
- (void)setIconSize:;
- (id)iconSize;
- (double)baselineFromBoundsTop;
- (id)iconView;
- (void)setIconView:;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)setPadding:;
- (void)traitCollectionDidChange:;
- (void)setTextView:;
- (void).cxx_destruct;
- (double)padding;
- (void)updateConstraints;
- (id)initWithIcon:iconSize:text:dataDetectorTypes:;
- (void)updateFont;
@end
