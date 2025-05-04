@interface AWEIMEmotionCareBotFeedbackProps : AWEIMUIViewPresenterProps
@property (nonatomic) @? didClickLikeButton;
@property (nonatomic) @? didClickDislikeButton;
@property (nonatomic) UIImage likeButtonImage;
@property (nonatomic) UIImage dislikeButtonImage;
@property (nonatomic) UIColor btnBackgroundColor;
- (id)btnBackgroundColor;
- (void)setBtnBackgroundColor:;
- (void)setDidClickDislikeButton:;
- (void)setDidClickLikeButton:;
- (void)setLikeButtonImage:;
- (void)setDislikeButtonImage:;
- (id)didClickDislikeButton;
- (id)didClickLikeButton;
- (id)likeButtonImage;
- (id)dislikeButtonImage;
- (void).cxx_destruct;
@end
