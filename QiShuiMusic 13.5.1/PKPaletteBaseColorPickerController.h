@interface PKPaletteBaseColorPickerController : NSObject
@property (nonatomic) <PKPaletteColorPicker> colorPicker;
@property (nonatomic) UIViewController viewController;
@property (nonatomic) <PKPaletteColorPickerControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIColor selectedColor;
@property (nonatomic) BOOL supportsAlpha;
@property (nonatomic) q colorUserInterfaceStyle;
- (id)selectedColor;
- (void)setDelegate:;
- (id)viewController;
- (id)delegate;
- (void).cxx_destruct;
- (void)setSelectedColor:;
- (void)setSupportsAlpha:;
- (BOOL)supportsAlpha;
- (void)setColorUserInterfaceStyle:;
- (id)colorPicker;
- (long long)colorUserInterfaceStyle;
- (void)setSelectedColorForPoint:;
@end
