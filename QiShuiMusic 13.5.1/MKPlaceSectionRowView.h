@interface MKPlaceSectionRowView : MKPlaceSectionItemView
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
- (void)setSelected:animated:;
- (void)setSelected:;
- (BOOL)isSelected;
- (BOOL)isHighlighted;
- (void)setHighlighted:animated:;
- (void)setHighlighted:;
- (void)_updateBackgroundColor:;
@end
