@interface SYBacklinkIndicatorUsage : NSObject
+ (id)_listenerEndpoint;
+ (void)didActivateBacklinkItemWithIdentifier:;
+ (void)set_listenerEndpoint:;
+ (id)_proxyWithError:;
+ (id)_identifierFromUserActivity:;
+ (void)didActivateBacklinkItemWithUserActivity:;
+ (void)didDismissBacklinkItemWithUserActivity:;
+ (void)_assumeEndpoint:;
@end
