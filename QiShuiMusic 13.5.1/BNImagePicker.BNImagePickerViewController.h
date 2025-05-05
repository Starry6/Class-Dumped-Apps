@interface BNImagePicker.BNImagePickerViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etPageName;
@property (nonatomic) Q supportedInterfaceOrientations;
- (id)etPageName;
- (void)photoLibraryDidChange:;
- (void)becomeActive;
- (void)dealloc;
- (id)initWithCoder:;
- (void)didMoveToParentViewController:;
- (void)viewWillDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
