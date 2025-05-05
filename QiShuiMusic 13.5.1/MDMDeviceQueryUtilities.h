@interface MDMDeviceQueryUtilities : NSObject
+ (id)allowedDeviceQueriesForAccessRights:;
+ (id)allowedDeviceQueriesOnUserChannelForAccessRights:;
+ (id)allowedDeviceQueriesWithUserEnrollment;
@end
