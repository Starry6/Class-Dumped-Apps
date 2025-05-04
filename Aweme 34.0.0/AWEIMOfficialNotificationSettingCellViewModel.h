@interface AWEIMOfficialNotificationSettingCellViewModel : NSObject
@property (nonatomic) NSString cellIdentifier;
@property (nonatomic) @ model;
@property (nonatomic) q group;
@property (nonatomic) NSString accountType;
@property (nonatomic) double cellHeight;
- (void)setCellIdentifier:;
- (void)onSwitchValueChanged:;
- (void)onArrowTapped;
- (id)initWithCellIdentifier:model:group:accountType:;
- (void)fetchStateWithParams:completion:;
- (void)trackSettingClickWithSwitchStatus:switchType:subscribeModel:;
- (void)setModel:;
- (void)setGroup:;
- (long long)group;
- (id)accountType;
- (id)model;
- (void).cxx_destruct;
- (id)cellIdentifier;
- (double)cellHeight;
- (void)setCellHeight:;
@end
