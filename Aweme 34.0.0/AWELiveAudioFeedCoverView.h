@interface AWELiveAudioFeedCoverView : UIView
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) AWELiveAudioFeedViewModel viewModel;
@property (nonatomic) {CGPoint=dd} coverOffset;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setCoverOffset:;
- (id)coverOffset;
- (id)viewModel;
- (void)setup;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)initWithFrame:viewModel:;
@end
