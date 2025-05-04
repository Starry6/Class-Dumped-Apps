@interface AWEDiscoverDSurveyLynxPanelViewController : AWEDiscoverDFeedLynxPanelViewController
@property (nonatomic) UIView<AWEFeedDynamicContainerProtocol> lynxContainer;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (id)lynxContainer;
- (void)onApplicationDidChangeStatusBarOrientation:;
- (void)setLynxContainer:;
- (id)panelDelegate;
- (void)setPanelDelegate:;
- (void)containerViewDidFinishLoadWithURL:;
- (void)containerViewDidLoadFailedWithURL:error:;
- (void)setModel:;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
