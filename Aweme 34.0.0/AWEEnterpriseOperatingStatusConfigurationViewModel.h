@interface AWEEnterpriseOperatingStatusConfigurationViewModel : AWESettingBaseViewModel
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (void)switchNonFriendActiveStatus:;
- (void)switchRecentConsultedCount:;
- (id)__constructConfigurationItems;
- (id)__constructNonFriendActiveStatusItem;
- (id)__constructRecentConsultedCount;
- (void)__updateItemStatusWithType:;
- (BOOL)__itemStatusWithType:;
- (void)__handleNetworkFailedWithType:;
- (void)__requestChangeSwitchStatusWithType:params:completion:;
- (void).cxx_destruct;
@end
