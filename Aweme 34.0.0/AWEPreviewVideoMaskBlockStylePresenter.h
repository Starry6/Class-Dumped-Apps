@interface AWEPreviewVideoMaskBlockStylePresenter : AWEPreviewVideoMaskPresenter
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) AWEPreviewVideoMaskView maskView;
- (void)configDetailView;
- (BOOL)shouldShowEffectiveView;
- (BOOL)shouldShowViewWithPeriod:;
- (BOOL)shouldDisableProgress;
- (void)updateMaskViewOffsetY;
- (BOOL)shouldStopVideoPlayWhenPreviewEnd;
- (void)updateCoverImageWithImage:frame:;
- (id)maskView;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)setDelegate:;
- (id)currentModel;
- (void)setCurrentModel:;
@end
