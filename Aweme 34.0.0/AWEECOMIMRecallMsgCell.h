@interface AWEECOMIMRecallMsgCell : AWEECOMIMBaseMsgCell
@property (nonatomic) YYLabel tipsLabel;
@property (nonatomic) AWEECOMIMRecallMessageModel cellModel;
- (id)tipsLabel;
- (void)setCellModel:;
- (void)setTipsLabel:;
- (void)didCustomInit;
- (void)updateRecallCell;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
