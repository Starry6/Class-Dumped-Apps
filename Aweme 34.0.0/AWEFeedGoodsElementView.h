@interface AWEFeedGoodsElementView : UIView
@property (nonatomic) UIImageView goodsImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIStackView priceLabelContainer;
@property (nonatomic) <AWEECShoppingGoodsCardElementViewDelegate> delegate;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) UIViewController containerVC;
@property (nonatomic) NSString referString;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)goodsImageView;
- (void)setGoodsImageView:;
- (void)updateViewWithModel:;
- (id)priceLabelContainer;
- (void)setPriceLabelContainer:;
- (id)delegate;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
@end
