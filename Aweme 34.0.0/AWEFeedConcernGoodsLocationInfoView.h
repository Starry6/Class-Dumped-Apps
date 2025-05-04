@interface AWEFeedConcernGoodsLocationInfoView : UIView
@property (nonatomic) UIImageView locationAnchor;
@property (nonatomic) UILabel nearestShopLabel;
@property (nonatomic) UILabel distanceLabel;
@property (nonatomic) UIImageView verticalSeparatorLine;
@property (nonatomic) UILabel shopNameLabel;
- (void)configWithModel:;
- (void)__setupUI;
- (id)shopNameLabel;
- (void)setShopNameLabel:;
- (void)__buildUI;
- (id)nearestShopLabel;
- (id)verticalSeparatorLine;
- (id)locationAnchor;
- (void)setLocationAnchor:;
- (void)setNearestShopLabel:;
- (void)setVerticalSeparatorLine:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)distanceLabel;
- (void)setDistanceLabel:;
@end
