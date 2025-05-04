@interface AWEEnterpriseIMLynxContainerView : AWEEnterpriseMessageBaseView
@property (nonatomic) NSDate startLoadTimeDate;
@property (nonatomic) UIView<BDXViewContainerProtocol> bulletContainer;
@property (nonatomic) AWEEnterpriseIMLynxReuseDelegateObject delegateObject;
@property (nonatomic) AWEEnterpriseIMLynxContainerViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didLoadFailedWithUrl:error:;
- (void)containerDidFirstScreen:;
- (void)bindViewModel:;
- (id)lynxEngine;
- (void)setStartLoadTimeDate:;
- (id)startLoadTimeDate;
- (void)enterpriseLynxReuseDelegateObject:viewDidChangeIntrinsicContentSize:;
- (void)setBulletContainer:;
- (id)bulletContainer;
- (void)setDelegateObject:;
- (id)didFinishLynxLoadBlock;
- (void)p_didFinishLynxLoadWithSuccess:;
- (void)lynxDidEndDisplaying;
- (void)setDidFinishLynxLoadBlock:;
- (id)delegateObject;
- (id)init;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
