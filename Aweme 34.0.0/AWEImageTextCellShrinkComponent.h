@interface AWEImageTextCellShrinkComponent : AWEImageTextBaseComponent
- (void)configCell:index:model:;
- (void)sectionWillDisplayCell:index:model:;
- (void)updateShrinkState:insets:animated:animationDuration:;
- (id)getShrinkState;
- (id)registerProtocol;
- (id)init;
- (id)initWithManager:;
@end
