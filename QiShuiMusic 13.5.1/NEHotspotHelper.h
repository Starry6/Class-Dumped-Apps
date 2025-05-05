@interface NEHotspotHelper : NSObject
+ (BOOL)registerWithOptions:queue:handler:;
+ (BOOL)logoff:;
+ (id)supportedNetworkInterfaces;
@end
