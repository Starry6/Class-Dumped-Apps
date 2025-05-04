@interface AWEECOMIMTextMsgCell : AWEECOMIMBaseUserMsgCell
@property (nonatomic) AWEECOMIMTextComponent textComponent;
@property (nonatomic) AWEECOMIMMsgReferenceView referenceView;
@property (nonatomic) AWEECOMIMTextMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (id)popMenuItems:;
- (void)setTextComponent:;
- (void)trackCellMsgReferenceDisplay;
- (void)trackCellMsgReferenceClick;
- (id)generateMsgReferenceClickParamsModel;
- (id)generateMsgReferenceDisplayParamsModel;
- (id)referenceView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (void)setReferenceView:;
- (void)layoutSubviews;
- (id)textComponent;
+ (void)getSize:withModel:;
@end
