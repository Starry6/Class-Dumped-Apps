@interface IESLiveAdminSwitchCellItem : IESLiveAdminCellItem
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) NSString disabledToast;
@property (nonatomic) BOOL isOn;
@property (nonatomic) NSInteger currentPrivilege;
- (int)currentPrivilege;
- (id)disabledToast;
- (void)setCurrentPrivilege:;
- (void)setDisabledToast:;
- (BOOL)isDisabled;
- (void)setIsDisabled:;
- (BOOL)isOn;
- (id)identifier;
- (void).cxx_destruct;
- (void)setIsOn:;
@end
