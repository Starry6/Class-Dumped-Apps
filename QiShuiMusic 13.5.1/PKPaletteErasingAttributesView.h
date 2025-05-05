@interface PKPaletteErasingAttributesView : UIView
@property (nonatomic) q eraserType;
@property (nonatomic) BOOL hideWeightPicker;
@property (nonatomic) UISegmentedControl segmentedControl;
@property (nonatomic) _PKInkThicknessPicker thicknessPicker;
@property (nonatomic) NSArray hiddenThicknessPickerConstraints;
@property (nonatomic) NSArray visibleThicknessPickerConstraints;
- (id)intrinsicContentSize;
- (BOOL)_canShowWhileLocked;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)segmentedControl;
- (void)setSegmentedControl:;
- (long long)eraserType;
- (void)setHideWeightPicker:;
- (void)setEraserType:;
- (void)_updateThicknessPickerToolConfiguration;
- (BOOL)hideWeightPicker;
- (id)thicknessPicker;
- (void)setThicknessPicker:;
- (id)hiddenThicknessPickerConstraints;
- (void)setHiddenThicknessPickerConstraints:;
- (id)visibleThicknessPickerConstraints;
- (void)setVisibleThicknessPickerConstraints:;
@end
