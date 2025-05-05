@interface UIPDFViewManager : NSObject
- (void)makeViewActive:;
- (void)viewReleased:;
+ (id)sharedViewManager;
@end
