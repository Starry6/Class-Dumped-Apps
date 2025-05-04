@interface AWECommentMusicSearchHint : UIView
@property (nonatomic) UILabel primaryLabel;
@property (nonatomic) UILabel secondaryLabel;
@property (nonatomic) UIButton solutionButton;
@property (nonatomic) UIImageView emptyImageView;
@property (nonatomic) UIButton retryButton;
- (void)configureUI;
- (id)solutionButton;
- (void)showSolution;
- (void)setSolutionButton:;
- (id)emptyImageView;
- (void)showEmpty;
- (void)setEmptyImageView:;
- (id)init;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSecondaryLabel:;
- (void)setPrimaryLabel:;
- (void)showError;
- (void)setRetryButton:;
- (id)retryButton;
@end
