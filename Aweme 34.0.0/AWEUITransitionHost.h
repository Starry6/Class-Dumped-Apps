@interface AWEUITransitionHost : NSObject
@property (nonatomic) AWELazy transitionDelegate;
- (void)presentViewController:animated:changeModalPresentationStyle:completion:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)presentViewController:animated:completion:;
- (id)transitionDelegate;
@end
