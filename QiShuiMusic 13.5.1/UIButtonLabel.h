@interface UIButtonLabel : UILabel
@property (nonatomic) BOOL _fontIsDefaultForIdiom;
- (void)_internallySetNumberOfLines:;
- (void)_contentDidChange:fromContent:;
- (id)intrinsicContentSize;
- (void)setShadowOffset:;
- (void)setFont:;
- (id)shadowOffset;
- (void)_setFont:isDefaultForIdiom:;
- (BOOL)_textColorFollowsTintColor;
- (void).cxx_destruct;
- (id)_initWithFrame:button:;
- (void)setNumberOfLines:;
- (BOOL)_fontIsDefaultForIdiom;
- (void)_setWantsAutolayout;
- (void)setReverseShadow:;
- (void)_updateTextColorWithFallbackColorIfNeeded;
- (double)_paddingForBaselineSpacingFromEdge:toNeighborEdge:;
- (BOOL)_shouldAnimatePropertyWithKey:;
@end
