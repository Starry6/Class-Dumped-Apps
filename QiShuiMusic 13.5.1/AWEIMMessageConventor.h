@interface AWEIMMessageConventor : NSObject
+ (long long)AWEIMMessageStateFromTIMOMessageStatus:;
+ (id)p_getUpgradeXDictionaryForAnimationFromUid:outBusinessType:ext:;
+ (void)__didReceiveShowPopupsWithDialogArray:conversationID:;
+ (void)_calculateMessageSize:;
+ (void)_didReceiveStrongTipsNotice:;
+ (id)_getUpgradeDictionaryTipsFromUid:;
+ (id)awemeAppStoreURLString;
+ (void)configMsg:withSMsg:contentDict:extDict:;
+ (void)configMsg:withTTMsg:;
+ (id)converMessageFromStrangerMsg:;
+ (id)converMessageFromStrangerMsg:calculaeSize:;
+ (id)convertDictFromJsonString:;
+ (id)convertMessageFromTIMOMessage:chatModelType:;
+ (id)convertMessageFromTIMOMessage:conversationHint:chatModelType:;
+ (id)generateAntiSpamMessageFromTIMOMessage:;
+ (id)generateAntiSpamMessageFromTIMOMessage:conversationHint:;
+ (id)p_getUpgradeXDictionaryForCardWithOutBusinessType:ext:;
+ (id)p_getUpgradeXDictionaryTipsFromUid:messageType:outBusinessType:ext:;
+ (id)projectXMessageStyleSetupWithIMMessage:busiType:;
+ (id)textColorForUnknownMessageFromSelf;
@end
