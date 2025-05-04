@interface AWELiveExpoundCardPoiInfoView : UIView
@property (nonatomic) UIStackView poiDetailView;
@property (nonatomic) UILabel distanceLabel;
@property (nonatomic) UILabel poiTextLabel;
@property (nonatomic) UIView line;
- (id)poiDetailView;
- (id)poiTextLabel;
- (void)configWithDistance:poiText:;
- (id)currentShowPoiName;
- (void)setPoiDetailView:;
- (void)setPoiTextLabel:;
- (id)initWithFrame:;
- (id)line;
- (void).cxx_destruct;
- (id)distanceLabel;
- (void)setDistanceLabel:;
- (void)setLine:;
- (void)setupUI;
@end
