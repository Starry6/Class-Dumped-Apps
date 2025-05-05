@interface LynxUIView : LynxUI
- (BOOL)enableAccessibilityByDefault;
- (unsigned long long)getInitialOverflowType;
- (void)setContext:;
- (id)createView;
+ (void)lynxLazyLoad;
@end
