@interface AWEMVExtendedConsumptionMixVideoElement : AWEMVExtendedConsumptionBaseElement
@property (nonatomic) AWEMVExtendedConsumptionBarView mixVideoView;
- (BOOL)canAppearWithModel:context:;
- (id)mixVideoView;
- (BOOL)shouldUpdateMixVideoInfoBarView:context:;
- (BOOL)enableMixVideo:context:referString:;
- (void)setMixVideoView:;
- (void)viewDidLoad;
- (id)priority;
- (void)setData:;
- (void).cxx_destruct;
- (void)setupUI;
@end
