@interface UICalloutBarBackground : UIView
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} highlightRect;
@property (nonatomic) _UICalloutBarVisualStyle visualStyle;
- (void)setVisualStyle:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)cornerRadius;
- (id)visualStyle;
- (id)initWithVisualStyle:;
- (id)containerBackgroundColor;
- (BOOL)prefersCustomSelection;
- (id)blurViewBackgroundEffects;
- (void)setHighlighted:forFrame:;
- (id)highlightRect;
- (void)setHighlightRect:;
@end
