@interface PTTestRecipe : NSObject
@property (nonatomic) PTTestRecipeInfo info;
@property (nonatomic) @? invalidationHandler;
@property (nonatomic) NSString title;
@property (nonatomic) @? prepareBlock;
@property (nonatomic) @? cleanupBlock;
- (void)_deactivate;
- (void)setPrepareBlock:;
- (void)setInfo:;
- (void)_handleEvent:;
- (id)prepareBlock;
- (id)title;
- (void)_activate;
- (void).cxx_destruct;
- (id)invalidationHandler;
- (void)setInvalidationHandler:;
- (id)info;
- (void)invalidate;
- (BOOL)_wantsEvent:;
- (id)_initWithTitle:prepareBlock:cleanupBlock:;
- (id)cleanupBlock;
- (void)setCleanupBlock:;
@end
