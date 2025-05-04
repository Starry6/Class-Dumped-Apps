@interface AWEDetailPropCollectServiceImpl : NSObject
@property (nonatomic) UIViewController host;
@property (nonatomic) AWEDetailPropViewModel stateContext;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) BOOL animatingNavigationBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithHost:serviceProvider:;
- (void)collectWithActionSender:;
- (void)p_handleToastTipAnimationWithCollectStatus:eventSender:propModel:;
- (void)p_handleCollectError:;
- (BOOL)animatingNavigationBar;
- (void)setAnimatingNavigationBar:;
- (void)setHost:;
- (id)host;
- (void)setProvider:;
- (void)setStateContext:;
- (void).cxx_destruct;
- (id)stateContext;
- (id)provider;
@end
