@interface IESIMSaaSSettingsManager : NSObject
+ (id)attachmentRefreshConfig;
+ (id)attachmentRefreshConfigCodeWhiteList;
+ (BOOL)attachmentRefreshConfigDisableRefresh;
+ (BOOL)attachmentRefreshConfigRefreshAnyway;
+ (BOOL)disabledEncryptedResourceUrlProductLocally;
+ (id)imImageDomain;
+ (id)imImageDomains;
@end
