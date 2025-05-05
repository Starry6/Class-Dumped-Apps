@interface PTToggleTestRecipe : PTTestRecipe
@property (nonatomic) @? toggleAction;
@property (nonatomic) BOOL on;
- (void)_deactivate;
- (BOOL)isOn;
- (void)_handleEvent:;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)_wantsEvent:;
- (id)toggleAction;
- (void)setToggleAction:;
+ (id)recipeWithTitle:toggleAction:;
+ (id)recipeWithTitle:prepareBlock:toggleAction:cleanupBlock:;
@end
