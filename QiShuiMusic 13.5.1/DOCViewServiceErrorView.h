@interface DOCViewServiceErrorView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIButton tryAgainButton;
@property (nonatomic) <DOCViewServiceErrorViewDelegate> delegate;
- (id)init;
- (void)setTitleLabel:;
- (id)subtitleLabel;
- (void)setDelegate:;
- (void)setSubtitleLabel:;
- (id)delegate;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)didTapTryAgain;
- (id)tryAgainButton;
- (void)setTryAgainButton:;
@end
