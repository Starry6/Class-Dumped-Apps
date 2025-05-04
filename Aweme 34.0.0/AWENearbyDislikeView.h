@interface AWENearbyDislikeView : UIView
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UIButton dislikeButton;
@property (nonatomic) UILabel dislikeLabel;
@property (nonatomic) @? didClickDislikeBlock;
@property (nonatomic) @? didClickBackgroundBlock;
- (void)p_setupUI;
- (void)showInView:animated:;
- (id)dislikeButton;
- (void)setDislikeButton:;
- (id)dislikeLabel;
- (void)setDislikeLabel:;
- (void)p_backgroundClicked;
- (void)p_dislikeButtonClicked;
- (id)didClickBackgroundBlock;
- (id)didClickDislikeBlock;
- (void)p_relayout;
- (void)setDidClickDislikeBlock:;
- (void)setDidClickBackgroundBlock:;
- (void)setBackgroundView:;
- (id)initWithFrame:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)dismiss:;
@end
