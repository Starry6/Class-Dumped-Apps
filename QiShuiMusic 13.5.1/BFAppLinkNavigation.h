@interface BFAppLinkNavigation : NSObject
@property (nonatomic) NSDictionary extras;
@property (nonatomic) NSDictionary appLinkData;
@property (nonatomic) BFAppLink appLink;
- (void)setAppLinkData:;
- (id)appLinkURLWithTargetURL:error:;
- (long long)navigate:;
- (void)postAppLinkNavigateEventNotificationWithTargetURL:error:type:;
- (id)stringByEscapingQueryString:;
- (long long)navigationType;
- (void)setExtras:;
- (void).cxx_destruct;
- (id)extras;
- (id)appLink;
- (void)setAppLink:;
- (id)appLinkData;
+ (id)callbackAppLinkDataForAppWithName:url:;
+ (long long)navigateToAppLink:error:;
+ (id)navigateToURLInBackground:;
+ (id)navigateToURLInBackground:resolver:;
+ (long long)navigationTypeForLink:;
+ (id)navigationWithAppLink:extras:appLinkData:;
+ (id)resolveAppLinkInBackground:;
+ (id)resolveAppLinkInBackground:resolver:;
+ (void)setDefaultResolver:;
+ (id)defaultResolver;
@end
