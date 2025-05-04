@interface AWEProfileOSDecider : NSObject
+ (BOOL)forbidPostWorkPlayletBarWithUser:;
+ (BOOL)forbidPostWorkTabCeilingToastWithUser:;
+ (BOOL)forbidCompanyEditWithUser:;
+ (id)forbidEditToast;
@end
