@interface AWEIMOfficialNotificationSettingSubscribeCellViewModel : AWEIMOfficialNotificationSettingCellViewModel
@property (nonatomic) NSString subscribeActionSelectedCellTitle;
@property (nonatomic) BOOL enableCommonSubscribeExp;
- (void)onArrowTapped;
- (void)setSubscribeActionSelectedCellTitle:;
- (id)subscribeActionSelectedCellTitle;
- (void)onNoticeSubscribeStateChange:;
- (BOOL)enableCommonSubscribeExp;
- (void)setEnableCommonSubscribeExp:;
- (void).cxx_destruct;
@end
