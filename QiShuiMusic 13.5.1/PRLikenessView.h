@interface PRLikenessView : UIView
@property (nonatomic) BOOL circular;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldDecode;
@property (nonatomic) PRLikeness likeness;
- (void)dealloc;
- (void)layoutSubviews;
- (BOOL)isCircular;
- (id)_imageView;
- (BOOL)highlighted;
- (id)initWithFrame:;
- (void)setCircular:;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)likeness;
- (id)initWithLikeness:;
- (id)_monogramView;
- (void)_updateViewForLikeness:;
- (BOOL)_shouldRenderStaticRepresentation;
- (void)_imageForLikeness:completion:;
- (void)setLikeness:;
- (BOOL)_isLikenessEqual:;
- (void)_setDisplayedView:;
- (void)setNeedsRedraw;
- (BOOL)shouldDecode;
- (void)setShouldDecode:;
@end
