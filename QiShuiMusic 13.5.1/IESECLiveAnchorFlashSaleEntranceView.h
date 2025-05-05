@interface IESECLiveAnchorFlashSaleEntranceView : UIView
@property (nonatomic) IESECLiveAnchorFlashSaleViewModel viewModel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UITapGestureRecognizer tapGesture;
- (void)p_setupUI;
- (id)viewModel;
- (id)iconView;
- (void)setIconView:;
- (id)initWithViewModel:;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setViewModel:;
- (void)setTapGesture:;
- (void)tapAction;
+ (id)pluginLayoutContentInsets;
+ (id)pluginLayoutContentSize;
+ (unsigned long long)viewType;
@end
