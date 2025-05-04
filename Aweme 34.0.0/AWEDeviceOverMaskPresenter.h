@interface AWEDeviceOverMaskPresenter : AWEUnPaidVideoMaskPresenter
@property (nonatomic) AWEPreviewVideoMaskView maskView;
@property (nonatomic) AWEAwemeModel currentModel;
- (void)configDetailView;
- (BOOL)shouldShowEffectiveView;
- (id)initWithView:model:referString:logExtra:;
- (BOOL)shouldShowViewWithPeriod:;
- (BOOL)shouldAnimateWhenShown;
- (BOOL)shouldAnimateWhenHidden;
- (BOOL)shouldDisableProgress;
- (BOOL)shouldCheckViewStatus;
- (id)maskView;
- (void).cxx_destruct;
- (void)setMaskView:;
- (id)currentModel;
- (void)setCurrentModel:;
+ (BOOL)shouldActiveWithData:referString:logExtra:;
@end
