@interface PTSingleTestRecipe : PTTestRecipe
@property (nonatomic) @? action;
- (void)_handleEvent:;
- (id)action;
- (void)setAction:;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)_wantsEvent:;
+ (id)recipeWithTitle:action:;
+ (id)recipeWithTitle:prepareBlock:action:cleanupBlock:;
@end
