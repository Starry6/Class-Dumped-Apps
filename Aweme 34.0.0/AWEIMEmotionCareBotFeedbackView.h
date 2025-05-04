@interface AWEIMEmotionCareBotFeedbackView : UIView
@property (nonatomic) @? didClickLikeButton;
@property (nonatomic) @? didClickDislikeButton;
@property (nonatomic) UIImageView likeImageView;
@property (nonatomic) UIImageView dislikeImageView;
- (void)p_setupUI;
- (id)likeImageView;
- (void)setLikeImageView:;
- (id)dislikeImageView;
- (void)setDislikeImageView:;
- (void)p_addGesture;
- (void)setDidClickDislikeButton:;
- (void)setDidClickLikeButton:;
- (id)didClickDislikeButton;
- (id)didClickLikeButton;
- (void)p_constraintSubViews;
- (void)p_onTapLikeButton;
- (void)p_onTapDislikeButton;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
