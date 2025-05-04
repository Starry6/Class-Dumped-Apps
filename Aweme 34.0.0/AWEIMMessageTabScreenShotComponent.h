@interface AWEIMMessageTabScreenShotComponent : AWEIMComponentBase
@property (nonatomic) BOOL isChatListVisable;
- (void)hostVC_viewDidDisappear;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)p_onUserDidTakeScreenShot;
- (void)setIsChatListVisable:;
- (BOOL)isChatListVisable;
- (void)p_printBasicInfo;
- (void)p_printChatInfo:order:;
- (void)dealloc;
@end
