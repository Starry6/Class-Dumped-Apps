@interface MFComposeColorPickerController : UIViewController
@property (nonatomic) PKColorPicker colorPicker;
@property (nonatomic) BOOL shouldShowTitleBar;
@property (nonatomic) <MFComposeColorPickerControllerDelegate> delegate;
@property (nonatomic) UIColor selectedColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectedColor;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)setSelectedColor:;
- (void)closeColorPicker:;
- (void)colorPickerDidChangeSelectedColor:;
- (id)initWithSelectedColor:shouldShowTitleBar:;
- (id)colorPicker;
- (void)setColorPicker:;
- (BOOL)shouldShowTitleBar;
- (void)setShouldShowTitleBar:;
@end
