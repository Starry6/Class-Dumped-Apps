@interface AWEECOMIMSharkRecallMsgCell : AWEECOMIMBaseUserMsgCell
@property (nonatomic) AWEECOMIMSharkRecallMsgModel cellModel;
- (void)setCellModel:;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
@end
