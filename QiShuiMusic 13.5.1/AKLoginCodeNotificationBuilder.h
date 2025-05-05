@interface AKLoginCodeNotificationBuilder : NSObject
+ (id)buildLoginCodeNotificationWithTitle:body:footer:loginCode:;
+ (id)buildLoginCodeNotificationOptionsWithTitle:body:footer:loginCode:;
@end
