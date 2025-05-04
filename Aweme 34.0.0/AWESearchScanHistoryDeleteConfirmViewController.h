@interface AWESearchScanHistoryDeleteConfirmViewController : UIViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton confirmButton;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) @? confirmButtonTappedCallback;
@property (nonatomic) @? cancelButtonTappedCallback;
- (void)confirmButtonTapped;
- (void)configUI;
- (void)setupCorner;
- (id)confirmButtonTappedCallback;
- (id)cancelButtonTappedCallback;
- (void)setConfirmButtonTappedCallback:;
- (void)setCancelButtonTappedCallback:;
- (void)setCancelButton:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)cancelButtonTapped;
- (void)updateTitle:;
@end
