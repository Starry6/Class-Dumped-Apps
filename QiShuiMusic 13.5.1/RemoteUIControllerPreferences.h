@interface RemoteUIControllerPreferences : NSObject
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) NSString spinnerLabel;
@property (nonatomic) UIImage navBarImage;
@property (nonatomic) NSString navBarImageLabel;
- (void).cxx_destruct;
- (BOOL)showSpinner;
- (void)setShowSpinner:;
- (id)initWithSpinner:spinnerLabel:navBarImage:navBarImageLabel:;
- (id)initWithSpinner:spinnerLabel:;
- (id)initWithSpinner:;
- (id)spinnerLabel;
- (void)setSpinnerLabel:;
- (id)navBarImage;
- (void)setNavBarImage:;
- (id)navBarImageLabel;
- (void)setNavBarImageLabel:;
@end
