@interface AWELivePosterPublishProgressView : UIView
@property (nonatomic) UIView borderView;
@property (nonatomic) UIView progressMaskView;
@property (nonatomic) MBCircularProgressBarView circleProgressBar;
@property (nonatomic) double cornerRadius;
@property (nonatomic) UIImageView coverImageView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)circleProgressBar;
- (void)setCircleProgressBar:;
- (id)progressMaskView;
- (void)setProgressMaskView:;
- (id)init;
- (void)setCornerRadius:;
- (double)progress;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)reset;
- (void)setProgress:;
- (id)borderView;
- (void)setBorderView:;
@end
