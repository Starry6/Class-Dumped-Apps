@interface AWEDeliveryTextMsgCell : AWEDeliveryBaseUserMsgCell
@property (nonatomic) AWEDeliveryTextComponent textComponent;
@property (nonatomic) AWEDeliveryTextMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (id)popMenuItems:;
- (void)setTextComponent:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)layoutSubviews;
- (id)textComponent;
+ (void)getSize:withModel:;
@end
