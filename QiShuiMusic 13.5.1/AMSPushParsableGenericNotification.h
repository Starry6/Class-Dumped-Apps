@interface AMSPushParsableGenericNotification : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)handleNotificationPayload:config:bag:;
+ (BOOL)_shouldPresentAlertForPayload:;
+ (id)_generateDialogRequestFromPayload:config:;
+ (id)_generateNotificationFromPayload:config:;
@end
