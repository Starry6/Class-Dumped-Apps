@interface AWEIMMediaEditorComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMPickerAssetSelectedProcessInterface> selectedDataProcessor;
@property (nonatomic) PHAsset assetToEdit;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)setSelectedDataProcessor:;
- (id)selectedDataProcessor;
- (void)jumpToEditPage:context:;
- (void)setAssetToEdit:;
- (id)p_imModelForAsset:;
- (id)p_sourceModelForAsset:;
- (void)p_onReceiveEditedMediaWithPath:userInfo:;
- (void)p_onEditDismiss;
- (id)assetToEdit;
- (void)setScene:;
- (long long)scene;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
