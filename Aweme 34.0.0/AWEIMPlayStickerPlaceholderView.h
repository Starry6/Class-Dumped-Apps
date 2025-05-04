@interface AWEIMPlayStickerPlaceholderView : UIView
@property (nonatomic) UIView titleView;
@property (nonatomic) UIView detailView;
@property (nonatomic) UIView actionView;
@property (nonatomic) UIView centerCard;
@property (nonatomic) UIView leftCard;
@property (nonatomic) UIView rightCard;
- (void)p_addSubviews;
- (void)p_addConstrains;
- (id)centerCard;
- (id)leftCard;
- (id)rightCard;
- (void)setCenterCard:;
- (void)setLeftCard:;
- (void)setRightCard:;
- (id)titleView;
- (void)setTitleView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)actionView;
- (id)detailView;
- (void)setDetailView:;
- (void)setActionView:;
@end
