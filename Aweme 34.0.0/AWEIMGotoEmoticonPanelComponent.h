@interface AWEIMGotoEmoticonPanelComponent : AWEIMComponentBase
@property (nonatomic) NSString initialUniqueID;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)p_handleGotoEmoticonPanel:;
- (void)scrollToUniqueID:;
- (id)initialUniqueID;
- (void)setInitialUniqueID:;
- (void).cxx_destruct;
@end
