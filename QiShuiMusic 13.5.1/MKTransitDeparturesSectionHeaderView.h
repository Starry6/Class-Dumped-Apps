@interface MKTransitDeparturesSectionHeaderView : MKCustomSeparatorCell
@property (nonatomic) NSString text;
@property (nonatomic) MKButtonWithTargetArgument button;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (void)setText:;
- (void)tintColorDidChange;
- (id)button;
- (void).cxx_destruct;
- (id)text;
- (void)_updateConstraintValues;
- (id)initWithType:extraSpacing:;
- (id)initWithType:extraSpacing:reuseIdentifier:;
- (id)_initWithType:extraSpacing:reuseIdentifier:;
+ (id)_font:;
+ (id)_buttonFont:;
@end
