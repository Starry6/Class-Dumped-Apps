@interface AWENoticePushView : UIView
@property (nonatomic) AWENoticePushViewModel noticePushModel;
- (void)handleTapAction;
- (void)setNoticePushModel:;
- (id)noticePushModel;
- (void)trackPushViewTagGesture;
- (void)trackEventSwipeGesDirectionUp;
- (void)trackEventShowPushModel:trackID:;
- (void).cxx_destruct;
@end
