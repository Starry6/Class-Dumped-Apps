@interface BDXLynxFoldViewSlotLight : LynxUI
@property (nonatomic) BDXLynxTabBarPro tabbarPro;
@property (nonatomic) BDXLynxFoldViewSlotDragLight slotDrag;
- (BOOL)notifyParent;
- (void)setSlotDrag:;
- (void)setTabbarPro:;
- (id)slotDrag;
- (id)tabbarPro;
- (void).cxx_destruct;
- (void)insertChild:atIndex:;
- (id)createView;
+ (void)lynxLazyLoad;
@end
