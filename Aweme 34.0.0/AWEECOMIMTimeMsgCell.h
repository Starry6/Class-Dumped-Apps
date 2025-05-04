@interface AWEECOMIMTimeMsgCell : AWEECOMIMBaseMsgCell
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) AWEECOMIMTimeMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (void)setTimeLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
+ (double)timeCellHeight;
@end
