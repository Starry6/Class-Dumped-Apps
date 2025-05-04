@interface AWEIMFoldMessageHelpComponent : AWEIMFlexComponent
@property (nonatomic) q foldMsgType;
@property (nonatomic) AWEIMMessage displayMessage;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)p_tapAction;
- (void)p_createPresenterIfNeed;
- (void)p_prepareProps;
- (void)setFoldMsgType:;
- (void)p_tryShowRiskTips;
- (long long)foldMsgType;
- (id)p_parseRiskTpsModelFromMessage:;
- (id)displayMessage;
- (void)setDisplayMessage:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
