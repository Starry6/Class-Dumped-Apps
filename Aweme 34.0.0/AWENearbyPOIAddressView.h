@interface AWENearbyPOIAddressView : UIView
@property (nonatomic) <AWENearbyPOIInfoCardModel> model;
@property (nonatomic) UILabel poiDistantLabel;
@property (nonatomic) YYLabel poiAddressLabel;
@property (nonatomic) UIView line;
- (void)configViews;
- (void)configViewsWithModel:;
- (id)poiDistantLabel;
- (id)poiAddressLabel;
- (void)setPoiDistantLabel:;
- (void)setPoiAddressLabel:;
- (void)setModel:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (id)model;
- (id)line;
- (void).cxx_destruct;
- (void)setLine:;
@end
