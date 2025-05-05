@interface PuzzleLynxUtil : NSObject
+ (void)registerCustomView:forLynxView:;
+ (unsigned long long)latchTypeWithParams:;
+ (void)registerCanvasViewForLynxView:;
+ (void)registerCustomShadowNode:forLynxView:;
+ (void)setUpBridgeWithKitView:lynxView:onlyUseStandardMethods:;
+ (void)setUpBridgeWithLynxView:;
@end
