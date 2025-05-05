@interface UITableViewCellContentView : UIView
@property (nonatomic) {NSDirectionalEdgeInsets=dddd} overriddenDefaultLayoutMargins;
- (void)_setOverriddenDefaultLayoutMargins:;
- (void)setTranslatesAutoresizingMaskIntoConstraints:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (id)_concreteDefaultLayoutMargins;
- (id)_overriddenDefaultLayoutMargins;
- (void)_tableViewCellContentViewCommonSetup;
+ (id)classFallbacksForKeyedArchiver;
@end
