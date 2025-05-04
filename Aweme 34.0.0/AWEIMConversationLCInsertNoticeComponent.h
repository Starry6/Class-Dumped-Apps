@interface AWEIMConversationLCInsertNoticeComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:;
- (void)hostVC_viewWillDisappear;
- (void)didReceivePushMessage:;
- (void)insertNoticeWithPushInsertNoticeResponse:;
- (id)convertPBWithPushInsertNoticeResponse:;
+ (BOOL)canCreateComponentWithContext:;
@end
