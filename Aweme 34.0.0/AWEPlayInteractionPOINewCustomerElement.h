@interface AWEPlayInteractionPOINewCustomerElement : AWEPlayInteractionBaseActionButtonElement
@property (nonatomic) AWEPlayInteractionPOINewCustomerView poiView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)poiView;
- (void)setPoiView:;
- (BOOL)shouldActivateButtonWithData:;
- (void)p_configData;
- (BOOL)shouldShowPOINewCustomer;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
+ (id)activateInfoWithContext:;
@end
