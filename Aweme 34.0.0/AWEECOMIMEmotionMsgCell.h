@interface AWEECOMIMEmotionMsgCell : AWEECOMIMBaseUserMsgCell
@property (nonatomic) BDImageView emoticonView;
@property (nonatomic) AWEECOMIMIndicatorView loadingView;
@property (nonatomic) UIImageView failImageView;
@property (nonatomic) UILabel failLabel;
@property (nonatomic) AWEECOMIMEmotionMsgModel cellModel;
- (id)failLabel;
- (void)setCellModel:;
- (id)emoticonView;
- (void)setEmoticonView:;
- (void)setFailLabel:;
- (void)didCustomInit;
- (id)failImageView;
- (void)setFailImageView:;
- (void)setLoadingView:;
- (id)loadingView;
- (void)onTap;
- (void).cxx_destruct;
- (void)layoutSubviews;
+ (void)getSize:withModel:;
+ (id)emoticonSizeWithModel:;
@end
