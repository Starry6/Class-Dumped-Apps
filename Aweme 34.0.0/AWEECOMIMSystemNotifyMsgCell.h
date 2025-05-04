@interface AWEECOMIMSystemNotifyMsgCell : AWEECOMIMBaseMsgCell
@property (nonatomic) UIImageView bgContainerView;
@property (nonatomic) UILabel themeLabel;
@property (nonatomic) YYLabel contentLabel;
@property (nonatomic) UIView bottomView;
@property (nonatomic) AWEECOMIMSystemNotifyMsgModel cellModel;
- (void)setCellModel:;
- (void)didCustomInit;
- (void)buttonClickAction:;
- (id)themeLabel;
- (void)setThemeLabel:;
- (id)bgContainerView;
- (void)setBgContainerView:;
- (void)_cusotmLayoutSubviews;
- (id)createImageWithMaskLayerColors:size:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)bottomView;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)setBottomView:;
+ (void)getSize:withModel:;
@end
