@interface AWEIMPickerBottomToolPanelComponent : AWEIMComponentBase
@property (nonatomic) UIView bottomViewContainer;
@property (nonatomic) UIView bottomContentView;
@property (nonatomic) <AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setBottomContentView:;
- (id)bottomContentView;
- (id)pickerConfig;
- (void)albumDidClickEntrance:;
- (void)onAssetProcessorDidSelectAssetIdentifier:;
- (void)onAssetProcessorDidRemoveAssetIdentifier:;
- (void)onAssetProcessorDidBatchRemoveIdentifiers:;
- (void)setSelectedDataProcessor:;
- (id)pickerVC;
- (id)selectedDataProcessor;
- (void)setBottomViewContainer:;
- (id)bottomViewContainer;
- (void)refreshBottomPanel;
- (void).cxx_destruct;
@end
