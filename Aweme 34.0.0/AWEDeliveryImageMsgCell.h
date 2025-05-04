@interface AWEDeliveryImageMsgCell : AWEDeliveryBaseUserMsgCell
@property (nonatomic) AWEDeliveryImageComponent imageComponentView;
@property (nonatomic) AWEDeliveryImageMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (id)popMenuItems;
- (void)updateUIWhenMessageStatusDidChanged;
- (id)imageComponentView;
- (void)_updateSubviewsLayout;
- (void)recheckMessageStatus;
- (void)setImageComponentView:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
