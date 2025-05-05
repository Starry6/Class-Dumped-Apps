@interface MKTransitDeparturesSectionFooterView : MKCustomSeparatorCell
@property (nonatomic) MKButtonWithTargetArgument button;
- (id)initWithStyle:reuseIdentifier:;
- (void)_contentSizeCategoryDidChange;
- (void)tintColorDidChange;
- (id)button;
- (void).cxx_destruct;
- (void)_updateConstraintValues;
+ (id)_font;
+ (double)defaultHeight;
@end
