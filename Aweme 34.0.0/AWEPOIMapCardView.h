@interface AWEPOIMapCardView : UIView
@property (nonatomic) NSDictionary logExtra;
@property (nonatomic) UILabel poiNameLabel;
@property (nonatomic) UILabel poiRecommendLabel;
@property (nonatomic) <AWEPOIMapCardViewDelegate> delegate;
- (void)setLogExtra:;
- (id)logExtra;
- (void)viewDidDisposed;
- (void)setPoiNameLabel:;
- (id)poiNameLabel;
- (void)updateWithAwemeModel:extraParams:;
- (void)closePOIMapCardAction;
- (void)seeMapDetailAciton;
- (id)poiRecommendLabel;
- (void)setPoiRecommendLabel:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)willDisplay;
@end
