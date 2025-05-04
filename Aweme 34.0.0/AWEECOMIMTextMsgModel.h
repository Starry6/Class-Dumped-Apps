@interface AWEECOMIMTextMsgModel : AWEECOMIMBaseMsgModel
@property (nonatomic) AWEECOMIMTextComponentModel textModel;
@property (nonatomic) AWEECOMIMMsgReferenceModel referenceModel;
@property (nonatomic) {CGSize=dd} textTotalDisplaySize;
- (id)textTotalDisplaySize;
- (id)textModel;
- (id)textContentSize;
- (void)setTextModel:;
- (void)setTextTotalDisplaySize:;
- (void)reBulildCellFullContentHeight;
- (id)referenceModel;
- (void)setReferenceModel:;
- (void).cxx_destruct;
- (id)initWithMessage:;
+ (id)textContentInsets;
+ (Class)cellClass;
@end
