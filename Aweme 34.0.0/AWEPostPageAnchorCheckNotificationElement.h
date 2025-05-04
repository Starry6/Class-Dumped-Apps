@interface AWEPostPageAnchorCheckNotificationElement : AWEPostPageElement
@property (nonatomic) DUXBottomNotification hintView;
- (void)elementAppear;
- (void)bindServices:;
- (BOOL)forceReceiveEvents;
- (void)showNewHintViewIfNeeded:anchorVM:;
- (void)showBottomNoticeIfNeeded:anchorVM:;
- (void)showAlertDialogIfNeeded:anchorVM:;
- (void)showHintViewIfNeeded:anchorVM:;
- (id)createActionWithNoticeButton:style:;
- (id)anchor;
- (BOOL)isVisible;
- (void).cxx_destruct;
- (id)hintView;
- (void)setHintView:;
+ (void)_aweLazyRegisterPostPage;
+ (Class)featureConfigClass:;
+ (id)type;
@end
