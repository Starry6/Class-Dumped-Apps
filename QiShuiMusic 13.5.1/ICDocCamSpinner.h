@interface ICDocCamSpinner : NSObject
@property (nonatomic) NSDate showDate;
@property (nonatomic) UIActivityIndicatorView activityIndicator;
@property (nonatomic) double minimumDuration;
@property (nonatomic) UIViewPropertyAnimator animator;
- (id)animator;
- (void)setMinimumDuration:;
- (void)hide;
- (id)activityIndicator;
- (void)setAnimator:;
- (void)setActivityIndicator:;
- (void)show;
- (double)minimumDuration;
- (void).cxx_destruct;
- (id)initWithView:minimumDuration:;
- (id)showDate;
- (void)setShowDate:;
@end
