@interface AWEDeliveryTextMsgModel : AWEDeliveryBaseMsgModel
@property (nonatomic) AWEDeliveryTextComponentModel textModel;
@property (nonatomic) {CGSize=dd} textTotalDisplaySize;
- (void)reBuildCellFullContentHeight;
- (id)textTotalDisplaySize;
- (id)textModel;
- (id)textContentSize;
- (void)setTextModel:;
- (void)setTextTotalDisplaySize:;
- (void).cxx_destruct;
- (id)initWithMessage:;
+ (id)textContentInsets;
+ (Class)cellClass;
@end
