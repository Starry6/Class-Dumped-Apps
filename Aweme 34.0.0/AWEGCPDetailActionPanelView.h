@interface AWEGCPDetailActionPanelView : UIView
@property (nonatomic) AWEGCPDetailActionPanelViewStyleConfig config;
@property (nonatomic) UIStackView buttonStackView;
@property (nonatomic) IESGCPImageButton likeButton;
@property (nonatomic) IESGCPImageButton commentButton;
@property (nonatomic) IESGCPImageButton favoriteButton;
@property (nonatomic) IESGCPImageButton shareButton;
@property (nonatomic) @? likeBtnClickedBlock;
@property (nonatomic) @? commentBtnClickedBlock;
@property (nonatomic) @? favoriteBtnClickedBlock;
@property (nonatomic) @? shareBtnClickedBlock;
- (id)commentButton;
- (void)setFavoriteButton:;
- (id)commentBtnClickedBlock;
- (id)likeBtnClickedBlock;
- (void)setLikeBtnClickedBlock:;
- (void)setCommentBtnClickedBlock:;
- (void)setCommentButton:;
- (id)shareBtnClickedBlock;
- (void)setShareBtnClickedBlock:;
- (void)setFavoriteBtnClickedBlock:;
- (id)favoriteBtnClickedBlock;
- (void)setupImageButton:withConfig:;
- (void)updateCountWithButton:clickBeforeImageName:clickAfterImageName:buttonStatus:buttonCount:defaultWord:;
- (void)likeButtonDidClicked;
- (void)commentButtonDidClicked;
- (void)favoriteButtonDidClicked;
- (void)shareButtonDidClicked;
- (void)setupViewWithConfig:;
- (void)updateLikeCountWithGameAwemeModel:;
- (void)updateFavoriteCountWithGameAwemeModel:;
- (void)updateCommentCountWithGameAwemeModel:;
- (void)updateShareCountWithGameAwemeModel:;
- (void)updateButtonSpacing:;
- (void)setConfig:;
- (id)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutView;
- (void)setupView;
- (id)favoriteButton;
- (id)buttonStackView;
- (void)setShareButton:;
- (id)likeButton;
- (void)setButtonStackView:;
- (void)setLikeButton:;
- (id)shareButton;
@end
