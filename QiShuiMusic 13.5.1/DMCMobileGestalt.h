@interface DMCMobileGestalt : NSObject
+ (id)serialNumber;
+ (id)deviceColor;
+ (id)regionCode;
+ (BOOL)isPad;
+ (id)deviceUDID;
+ (id)productName;
+ (id)modelNumber;
+ (id)buildVersion;
+ (id)deviceClass;
+ (id)productType;
+ (BOOL)isHomePod;
+ (BOOL)hasCellularDataCapability;
+ (BOOL)isWatch;
+ (BOOL)isPhone;
+ (BOOL)isAppleTV;
+ (id)diskCapacity;
+ (BOOL)hasTelephonyCapability;
+ (id)diskUsage;
+ (id)_overridableGestaltForKey:expectedClass:;
+ (BOOL)hasInternetTetheringCapability;
+ (id)marketingVersion;
+ (id)supplementalMarketingVersionExtra;
+ (id)supplementalBuildVersion;
+ (id)supplementalMarketingVersion;
+ (id)deviceCapacity;
+ (id)availableCapacity;
@end
