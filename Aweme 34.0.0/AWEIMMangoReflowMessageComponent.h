@interface AWEIMMangoReflowMessageComponent : AWEIMFlexComponentSwiftAdapter
- (void)afterInitialComponentAllResolved:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
