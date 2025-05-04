@interface AWEPOIRecorderTipsComponent : ACCFeatureComponent
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)componentDidMount;
- (id)poiTipsModel;
- (void)setBackgroundView:;
- (id)backgroundView;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
