@interface IESECWinLivingHotSalesComponent : UIView
@property (nonatomic) UIImageView fireIconView;
@property (nonatomic) UILabel hotSalesLabel;
- (id)fireIconView;
- (id)hotSalesLabel;
- (void)p_setupUI;
- (void)setFireIconView:;
- (void)setHotSalesLabel:;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)hotSales;
+ (double)hotSalesWidthWithModel:;
+ (id)hotSalesWithHotSalesWidth:;
@end
