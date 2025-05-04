@interface AWEIMSilverWingFakeHelloMsgComponent : AWEIMComponentBase
@property (nonatomic) AWEIMMessage fakeSilverWingHelloMsg;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)p_addKVO;
- (void)p_insertFakeHelloMsg;
- (void)setFakeSilverWingHelloMsg:;
- (id)fakeSilverWingHelloMsg;
- (void)p_deleteFakeHelloMsg;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
