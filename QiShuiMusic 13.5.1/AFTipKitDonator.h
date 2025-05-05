@interface AFTipKitDonator : NSObject
+ (void)_donateToTipsWithIdentifier:bundleID:context:userInfo:;
+ (void)donateAnnounceNotificationsInCarPlaySettingsChange:;
+ (void)donateDictationEventStartedForBundleId:context:userInfo:;
+ (void)donateSiriEventStartedForBundleId:context:userInfo:;
+ (void)donateMessageSentForBundleId:context:userInfo:;
+ (void)donateCallHangUpAvailabilityChanged:;
@end
