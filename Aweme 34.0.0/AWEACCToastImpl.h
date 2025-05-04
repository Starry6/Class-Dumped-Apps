@interface AWEACCToastImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showToast:;
- (void)dismissToast;
- (void)showNetWeak;
- (void)showAtTooMore;
- (void)showSuccess:;
- (void)showDraftPublishAndForceUseLocal:;
- (void)show:onView:;
- (void)showError:onView:;
- (void)showSuccess:onView:;
- (void)showDebugToast:;
- (void)showMultiLine:onView:;
- (void)show:;
- (void)showError:;
@end
