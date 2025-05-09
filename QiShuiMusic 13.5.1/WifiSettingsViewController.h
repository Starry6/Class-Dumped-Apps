@interface WifiSettingsViewController : UIViewController
@property (nonatomic) UITextField ssidField;
@property (nonatomic) UITextField bssidField;
@property (nonatomic) UITextField ifnamField;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UISwitch wifiHookSwitch;
@property (nonatomic) UITableView tableView;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (void)dismissKeyboard;
- (void)updateStatusLabel;
- (void)wifiHookSwitchChanged:;
- (void)saveWifiInfo;
- (void)clearSavedWifiInfo;
- (void)showAlertWithTitle:message:;
- (id)createTextFieldWithPlaceholder:yPosition:;
- (id)createButtonWithTitle:yPosition:backgroundColor:;
- (void)cancelButtonTapped;
- (id)ssidField;
- (void)setSsidField:;
- (id)bssidField;
- (void)setBssidField:;
- (id)ifnamField;
- (void)setIfnamField:;
- (id)statusLabel;
- (void)setStatusLabel:;
- (id)wifiHookSwitch;
- (void)setWifiHookSwitch:;
- (id)tableView;
- (void)setTableView:;
- (void).cxx_destruct;
@end
