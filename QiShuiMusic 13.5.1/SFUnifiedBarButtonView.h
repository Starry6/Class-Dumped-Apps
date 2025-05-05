@interface SFUnifiedBarButtonView : SFUnifiedBarItemView
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL shouldTrailingAlignImage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)pointInside:withEvent:;
- (id)pointerInteraction:regionForRequest:defaultRegion:;
- (double)preferredWidth;
- (void)setImage:;
- (void)tintColorDidChange;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)_selectedIndicatorBounds;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)image;
- (id)_hitRect;
- (void)updateTitleFont;
- (BOOL)shouldTrailingAlignImage;
- (void)setShouldTrailingAlignImage:;
@end
