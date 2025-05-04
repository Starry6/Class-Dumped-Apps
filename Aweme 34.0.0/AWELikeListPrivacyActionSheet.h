@interface AWELikeListPrivacyActionSheet : NSObject
- (id)aAWEPadModuleAdapter;
+ (Class)aAWEPadModuleAdapterClass;
+ (void)showWithEnterFrom:completion:;
+ (void)showWithEnterFrom:useCardUIStyle:completion:loadingBlock:dismissBlock:;
+ (id)__settingModel:withIndex:isSelected:;
+ (void)showWithEnterFrom:completion:loadingBlock:dismissBlock:;
+ (id)__getLogStatusString:;
+ (void)changeLikeListPrivacySetting:completion:;
+ (void)__trackCancelSelectWithEnterFrom:type:;
@end
