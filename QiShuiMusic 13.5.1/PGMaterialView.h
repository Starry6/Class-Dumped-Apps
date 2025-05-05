@interface PGMaterialView : PGLayoutContainerView
@property (nonatomic) UIView contentView;
@property (nonatomic) BOOL backdropHidden;
- (id)contentView;
- (void)setBackgroundColor:;
- (void)layoutSubviews;
- (id)backgroundColor;
- (void)_setContinuousCornerRadius:;
- (void)_setCornerRadius:;
- (double)_cornerRadius;
- (id)initWithFrame:;
- (void)addSubview:;
- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (BOOL)PG_preferredVisibilityForView:;
- (BOOL)isBackdropHidden;
- (void)setBackdropHidden:;
@end
