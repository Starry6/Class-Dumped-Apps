@interface IMSMSFilterHelper : NSObject
+ (id)fetchSMSFilterExtensionParams;
+ (long long)filterActionForCategory:;
+ (long long)filterSubActionForCategory:subCategory:;
+ (unsigned long long)conversationFilterModeForMessageFilter:;
+ (void)updateSMSFilterExtensionParams;
+ (id)smsFilterParamForFilterMode:;
+ (id)fetchSMSFilterParamForCategory:subCategory:;
+ (id)filterLabelForAction:subAction:;
+ (BOOL)isValidActiveFilterAction:subAction:;
@end
