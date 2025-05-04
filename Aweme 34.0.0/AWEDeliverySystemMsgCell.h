@interface AWEDeliverySystemMsgCell : AWEDeliveryBaseMsgCell
@property (nonatomic) YYLabel tipLabel;
@property (nonatomic) AWEDeliverySystemMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTipLabel:;
- (id)tipLabel;
+ (void)getSize:withModel:;
@end
