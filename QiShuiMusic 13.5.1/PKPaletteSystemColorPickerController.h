@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController
@property (nonatomic) UIColorPickerViewController colorPickerViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)selectedColor;
- (id)viewController;
- (void).cxx_destruct;
- (void)setSelectedColor:;
- (void)colorPickerViewController:didSelectColor:continuously:;
- (void)setSupportsAlpha:;
- (BOOL)supportsAlpha;
- (void)setColorUserInterfaceStyle:;
- (long long)colorUserInterfaceStyle;
- (id)colorPickerViewController;
- (void)setColorPickerViewController:;
- (BOOL)_shouldConvertColorPickerColorFromDarkToLight;
@end
