@interface LPSubtitleButtonView : LPComponentView
- (void)sizeToFit;
- (id)viewForLastBaselineLayout;
- (id)sizeThatFits:;
- (id)initWithHost:;
- (void).cxx_destruct;
- (void)buttonPressed:;
- (void)layoutComponentView;
- (void)_buildSubviewsIfNeeded;
- (id)initWithHost:buttonProperties:style:;
- (id)_layoutButtonForSize:applyingLayout:;
@end
