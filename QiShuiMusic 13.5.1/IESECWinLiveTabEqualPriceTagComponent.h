@interface IESECWinLiveTabEqualPriceTagComponent : UIView
@property (nonatomic) UILabel equalPriceLabel;
@property (nonatomic) UIView splitView;
@property (nonatomic) UILabel salesLabel;
- (id)equalPriceLabel;
- (void)p_setupUI;
- (id)salesLabel;
- (void)setEqualPriceLabel:;
- (void)setSalesLabel:;
- (void)setSplitView:;
- (id)splitView;
- (void)updateUIWithModel:;
- (id)init;
- (void).cxx_destruct;
+ (id)equalPriceTagWithTagHeight:padding:;
@end
