@interface AWESearchRelatedSearchRecommendViewCell : UICollectionViewCell
@property (nonatomic) UILabel wordLabel;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseUIInfoModel UIInfoModel;
@property (nonatomic) BOOL isFromECommerce;
- (id)wordLabel;
- (void)setWordLabel:;
- (void)configUI;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:;
- (void)updateWithModel:UIInfoModel:;
- (id)UIInfoModel;
- (void)setUIInfoModel:;
- (BOOL)isSimplifiedProductBg;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
@end
