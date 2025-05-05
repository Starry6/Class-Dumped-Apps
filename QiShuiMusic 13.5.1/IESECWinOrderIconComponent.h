@interface IESECWinOrderIconComponent : UIView
@property (nonatomic) IESECWinLiveProductOrderIconView orderIconView;
- (id)orderIconView;
- (void)p_setupUI;
- (void)setOrderIconView:;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)orderIconWithIconSize:;
@end
