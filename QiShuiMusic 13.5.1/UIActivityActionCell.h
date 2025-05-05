@interface UIActivityActionCell : _UICollectionViewListCell
@property (nonatomic) UIVisualEffectView effectView;
@property (nonatomic) UIView fillView;
@property (nonatomic) BOOL disabled;
- (id)fillView;
- (void)setDisabled:;
- (BOOL)isDisabled;
- (id)effectView;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (void)setEffectView:;
- (void)setFillView:;
@end
