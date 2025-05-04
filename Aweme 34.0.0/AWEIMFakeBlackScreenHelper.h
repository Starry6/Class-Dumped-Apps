@interface AWEIMFakeBlackScreenHelper : NSObject
@property (nonatomic) UIWindow topMaskWindow;
- (void)fakeTurnOffScreenIfNeeded;
- (void)fakeTurnOnScreenIfNeeded;
- (id)topMaskWindow;
- (void)setTopMaskWindow:;
- (void).cxx_destruct;
+ (BOOL)shouldUseTopMaskWindow;
@end
