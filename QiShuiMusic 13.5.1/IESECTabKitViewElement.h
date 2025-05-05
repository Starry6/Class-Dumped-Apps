@interface IESECTabKitViewElement : LynxUI
- (id)customEventNameMap;
- (void)emitEvent:params:;
- (BOOL)supportCustomEvent:;
- (id)createView;
+ (void)registerTabKitView;
@end
