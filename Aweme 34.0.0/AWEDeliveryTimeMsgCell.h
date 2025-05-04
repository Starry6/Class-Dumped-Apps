@interface AWEDeliveryTimeMsgCell : AWEDeliveryBaseMsgCell
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) AWEDeliveryTimeMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (void)setTimeLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
+ (double)timeCellHeight;
@end
