@interface AWEDeliveryRecallMsgCell : AWEDeliveryBaseMsgCell
@property (nonatomic) YYLabel tipsLabel;
@property (nonatomic) AWEDeliveryRecallMessageModel cellModel;
- (id)tipsLabel;
- (void)setCellModel:;
- (void)setTipsLabel:;
- (void)didCustomInit;
- (void)updateRecallCell;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
