@interface UIKeyboardCache : NSObject
@property (nonatomic) _UIActionWhenIdle idleAction;
- (void)commitTransaction;
- (void)purge;
- (id)init;
- (void)dealloc;
- (void)setIdleAction:;
- (void)decrementExpectedRender:;
- (void)drawCachedImage:alpha:inContext:;
- (id)cachedImageForKey:fromLayout:;
- (id)uniqueLayoutsFromInputModes:;
- (void)incrementExpectedRender:;
- (void)clearNonPersistentCache;
- (void)updateCacheForInputModes:;
- (void).cxx_destruct;
- (id)displayImagesForView:fromLayout:imageFlags:;
- (void)_didIdle;
- (id)cachedCompositeImageForCacheKeys:fromLayout:opacities:;
- (void)_didIdleAndShouldWait;
- (id)idleAction;
+ (BOOL)enabled;
+ (id)sharedInstance;
@end
