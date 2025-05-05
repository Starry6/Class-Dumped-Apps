@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView
@property (nonatomic) @? finishSplitTransitionBlock;
- (unsigned long long)numberOfItems;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)preferredSize;
- (void)didFinishSplitTransition;
- (id)finishSplitTransitionBlock;
- (void)setFinishSplitTransitionBlock:;
- (void)didSelectItemAtIndex:;
- (unsigned long long)defaultSelectedIndex;
- (id)titleForItemAtIndex:;
- (BOOL)usesDeviceLanguageForItemAtIndex:;
- (void)actionForItem:;
- (int)visibleItemForIndex:;
- (void)setSplitAndUndocked:;
+ (id)sharedInstance;
+ (id)activeInstance;
@end
