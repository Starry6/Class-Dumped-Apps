@interface PKPaletteErasingAttributesViewController : PKPaletteAttributeViewController
@property (nonatomic) BOOL hideWeightPicker;
@property (nonatomic) q eraserType;
@property (nonatomic) double weight;
@property (nonatomic) <PKPaletteErasingAttributesViewControllerDelegate> delegate;
- (double)weight;
- (void)setDelegate:;
- (void)setWeight:;
- (BOOL)_canShowWhileLocked;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (id)preferredContentSize;
- (long long)eraserType;
- (void)setHideWeightPicker:;
- (void)setEraserType:;
- (BOOL)hideWeightPicker;
- (void)_segmentedControlDidChangeValue:;
- (void)_thicknessValueChanged:;
- (id)_attributesView;
+ (double)_preferredContentSizeWidth;
@end
