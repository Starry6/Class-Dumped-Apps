@interface AWEECOMIMSopRecommendMsgCell : AWEECOMIMBaseMsgCell
@property (nonatomic) YYLabel tipLabel;
- (void)setCellModel:;
- (void)didCustomInit;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTipLabel:;
- (id)tipLabel;
+ (void)getSize:withModel:;
+ (id)textSizeWithModel:;
+ (id)attributeContentWithModel:;
+ (void)handleAction:model:;
@end
