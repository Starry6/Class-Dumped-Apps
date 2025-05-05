@interface BDNativeContainerObject : NSObject
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) BDNativeContainerView containerView;
@property (nonatomic) UIView nativeView;
@property (nonatomic) BDNativeBaseComponent component;
- (void)updateContainer;
- (id)checkNativeInfo;
- (void)enableObserverFrameChanged;
- (id)nativeView;
- (void)removeNativeView;
- (void)setNativeView:;
- (void)setScrollView:;
- (void)dealloc;
- (id)containerView;
- (void)setContainerView:;
- (id)component;
- (id)scrollView;
- (void).cxx_destruct;
- (void)setComponent:;
@end
