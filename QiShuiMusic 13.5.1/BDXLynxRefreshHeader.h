@interface BDXLynxRefreshHeader : LynxUI
- (BOOL)shouldHitTest:withEvent:;
- (id)createView;
+ (void)lynxLazyLoad;
@end
