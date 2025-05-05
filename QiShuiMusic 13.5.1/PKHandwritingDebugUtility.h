@interface PKHandwritingDebugUtility : NSObject
+ (id)lassoDrawingFromTiledView:;
+ (id)localeIdentifiersFromDrawings:;
+ (void)presentHandwritingDebugViewFromViewController:allDrawings:tiledView:;
@end
