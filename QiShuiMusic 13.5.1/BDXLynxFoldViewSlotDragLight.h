@interface BDXLynxFoldViewSlotDragLight : LynxUI
@property (nonatomic) BOOL forbidMovable;
@property (nonatomic) BDXLynxTabBarPro tabbarPro;
- (BOOL)forbidMovable;
- (BOOL)notifyParent;
- (void)setEnableDrag:requestReset:;
- (void)setForbidMovable:;
- (void)setTabbarPro:;
- (id)tabbarPro;
- (void).cxx_destruct;
- (void)insertChild:atIndex:;
- (id)createView;
+ (id)__lynx_prop_config__391;
+ (void)lynxLazyLoad;
@end
