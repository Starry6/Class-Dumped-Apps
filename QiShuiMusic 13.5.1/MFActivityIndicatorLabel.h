@interface MFActivityIndicatorLabel : UIView
@property (nonatomic) UIActivityIndicatorView activityIndicator;
@property (nonatomic) UILabel textLabel;
- (id)textLabel;
- (id)init;
- (id)accessibilityLabel;
- (id)activityIndicator;
- (void)setActivityIndicator:;
- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
