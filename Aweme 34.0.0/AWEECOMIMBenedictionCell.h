@interface AWEECOMIMBenedictionCell : AWEECOMIMBaseMsgCell
@property (nonatomic) UIImageView benedictionImage;
@property (nonatomic) AWEECOMIMBenedictionMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (id)otherDisplayTrackParams;
- (id)benedictionImage;
- (void)setBenedictionImage:;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
