@interface AWEECOMIMVideoMsgCell : AWEECOMIMBaseUserMsgCell
@property (nonatomic) AWEECOMIMVideoComponent videoComponentView;
@property (nonatomic) AWEECOMIMVideoMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (id)popMenuItems;
- (void)recheckMessageStatus;
- (id)videoComponentView;
- (void)updateSubviewLayouts;
- (void)setVideoComponentView:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
