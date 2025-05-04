@interface AWESearchGoodsSellInfoView : UIView
@property (nonatomic) NSMutableArray infoViewArray;
@property (nonatomic) NSMutableArray separatorViewArray;
@property (nonatomic) AWESearchMerchandiseProductDoubleInfos doubleInfos;
- (id)infoViewArray;
- (id)separatorViewArray;
- (id)doubleInfos;
- (void)createSellLabelsWithCommonInfo:;
- (void)setDoubleInfos:;
- (void)setInfoViewArray:;
- (void)setSeparatorViewArray:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateUI;
+ (double)heightWithDoubleInfos:;
@end
