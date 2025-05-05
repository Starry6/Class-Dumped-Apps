@interface PKColorPicker : UIViewController
@property (nonatomic) _PKColorPickerView colorPickerView;
@property (nonatomic) <PKColorPickerDelegate> delegate;
@property (nonatomic) UIColor selectedColor;
@property (nonatomic) q colorUserInterfaceStyle;
- (id)init;
- (id)selectedColor;
- (void)setDelegate:;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (id)delegate;
- (void).cxx_destruct;
- (id)preferredContentSize;
- (void)viewDidLoad;
- (void)setSelectedColor:;
- (void)setColorUserInterfaceStyle:;
- (long long)colorUserInterfaceStyle;
- (id)colorPickerView;
- (void)setColorPickerView:;
- (id)_colorPickerView;
- (void)_setSelectedColorForPoint:;
- (void)_colorPickerViewDidChangeSelectedColor:;
- (void)_colorPickerViewUserDidTouchUpInside:;
- (void)_setInitialColorForSpringLoading:;
+ (id)_representableColorForColor:;
@end
