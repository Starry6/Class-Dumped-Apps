@interface AWELandscapeElementConfigs : NSObject
@property (nonatomic) <AWELandscapeVCContainerProtocol> actionDelegate;
- (void)configTopContainer:pageContext:;
- (void)configVideoInfoContainer:pageContext:;
- (void)configMiddleContainer:pageContext:;
- (void)configBottomContainer:pageContext:;
- (id)classNameArrayForTopContainerWithPageContext:;
- (id)classNameArrayForVideoInfoContainerWithPageContext:;
- (id)classNameArrayForMiddleContainerWithPageContext:;
- (id)classNameArrayForBottomContainerWithPageContext:;
- (id)actionDelegate;
- (void).cxx_destruct;
- (void)setActionDelegate:;
@end
