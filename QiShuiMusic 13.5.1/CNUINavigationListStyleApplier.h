@interface CNUINavigationListStyleApplier : NSObject
@property (nonatomic) <CNUINavigationListStyle> navigationListStyle;
- (void).cxx_destruct;
- (id)navigationListStyle;
- (id)initWithNavigationListStyle:;
- (void)applyNavigationListStyleToCell:;
- (void)applyNavigationListStyleToDetailCell:;
- (void)applyExpandedBackgroundNavigationListStyleToCell:;
- (void)applyCollapsedBackgroundNavigationListStyleToCell:;
@end
