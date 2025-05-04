@interface AWEIMPickerPreviewBottomToolPanelComponent : AWEIMComponentBase
@property (nonatomic) UIView bottomViewContainer;
@property (nonatomic) UIView bottomContentView;
@property (nonatomic) double bottomViewHeight;
@property (nonatomic) AWEIMPickerPreivewConfigration previewConfig;
@property (nonatomic) <AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setContainerHidden:;
- (id)previewConfig;
- (void)setPreviewConfig:;
- (double)bottomViewHeight;
- (id)previewVC;
- (void)setBottomContentView:;
- (id)bottomContentView;
- (void)setBottomViewHeight:;
- (void)setSelectedDataProcessor:;
- (id)selectedDataProcessor;
- (void)setBottomViewContainer:;
- (id)bottomViewContainer;
- (void)collectionView:didTapCell:isPureMode:;
- (void)collectionView:videoCellDidEndPlaying:;
- (void)selectCurrentShowingAsset;
- (void).cxx_destruct;
@end
