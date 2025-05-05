@interface PTDoubleTestRecipe : PTTestRecipe
@property (nonatomic) @? increaseAction;
@property (nonatomic) @? decreaseAction;
- (void)_handleEvent:;
- (id)increaseAction;
- (id)decreaseAction;
- (void)setIncreaseAction:;
- (void)setDecreaseAction:;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)_wantsEvent:;
+ (id)recipeWithTitle:increaseAction:decreaseAction:;
+ (id)recipeWithTitle:prepareBlock:increaseAction:decreaseAction:cleanupBlock:;
@end
