@interface AWEPrivacySettingFamiliarRecommendViewModel : AWEPrivacySettingBaseViewModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESettingItemModel recommendMeToFamiliarItem;
@property (nonatomic) AWESettingItemModel recommendFamiliarToMeItem;
- (void)willDisplayItemModel:;
- (void)requestUserSetting:completion:;
- (id)recommendFamiliarToMeItem;
- (id)recommendMeToFamiliarItem;
- (BOOL)p_recommendFamiliarToMeStatus;
- (void)p_switchRecommendMeToFamiliar:;
- (void)p_switchRecommendFamiliarToMe:;
- (void)setRecommendMeToFamiliarItem:;
- (void)setRecommendFamiliarToMeItem:;
- (id)init;
- (void).cxx_destruct;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (id)recommendFamiliarToMeTitle;
+ (id)recommendMeToFamiliarTitle;
+ (void)openRecommendDescriptionPage;
+ (id)pageDesc;
+ (id)pageDescHighlight;
+ (id)pageTitle;
@end
