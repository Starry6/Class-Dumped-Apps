@interface IESLivePublicScreenContainer : UIView
@property (nonatomic) UIStackView container;
- (void)updateConstraintsWithComponent:;
- (void)addPublicScreenComponent:withConfigModel:;
- (void)enumerateArrangedViewsUsingBlock:;
- (void)handleConfigModel:;
- (BOOL)isAllowList:;
- (id)queryViewWithType:;
- (void)removePublicScreenComponentWithConfigModel:;
- (void)updateConstraintsForAllComponents;
- (void)setContainer:;
- (id)init;
- (id)intrinsicContentSize;
- (id)container;
- (id)hitTest:withEvent:;
- (void)setup;
- (void).cxx_destruct;
@end
