@interface CLSUtil : NSObject
+ (id)stringFromTimeInterval:;
+ (void)postNotification:;
+ (BOOL)isAppleInternalInstall;
+ (id)mediumDateFormatter;
+ (BOOL)isSystemIntegrityEnabled;
+ (id)percentageStringFromNumber:;
+ (id)percentNumberFormatter;
+ (id)mediumStringFromDate:;
+ (id)dataFromPath:makeBackwardCompatible:error:;
+ (id)pathFromData:;
+ (id)dataFromError:;
+ (id)errorFromData:;
+ (id)hashData:lastHash:;
+ (id)hashData:lastHashData:;
+ (id)hashArrayOfStrings:lastHash:;
+ (id)dictionaryStrippingNSNullValues:;
+ (void)postNotificationAsync:;
+ (id)userDefaultsConfigurationDictionaryAndReturnError:;
+ (void)fetchInfoForAppWithBundleIdentifier:completion:;
@end
