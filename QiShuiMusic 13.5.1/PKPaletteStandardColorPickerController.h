@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController
@property (nonatomic) PKColorPicker colorPickerViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)selectedColor;
- (id)viewController;
- (void).cxx_destruct;
- (void)setSelectedColor:;
- (void)setSupportsAlpha:;
- (BOOL)supportsAlpha;
- (void)setColorUserInterfaceStyle:;
- (void)colorPickerDidChangeSelectedColor:;
- (long long)colorUserInterfaceStyle;
- (void)setSelectedColorForPoint:;
- (id)colorPickerViewController;
- (void)setColorPickerViewController:;
@end
