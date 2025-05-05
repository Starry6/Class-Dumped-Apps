@interface AMSPushParsableFollowUp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (BOOL)shouldSkipAccountCheck;
+ (void)handleNotificationPayload:config:bag:;
+ (void)removeDeviceOfferWithPayload:logKey:bag:;
+ (BOOL)isDeviceOfferNotification:;
+ (id)sharedISO8601DateFormatter;
+ (void)userNotification:selectedButtonAction:bag:;
+ (void)_performClearWithPayload:;
+ (void)_performPostWithPayload:bag:;
+ (BOOL)_shouldAllowFollowUp:bag:;
+ (BOOL)_shouldClearFollowUpFromPayload:;
+ (id)_createFollowUpItemFromPayload:;
+ (id)_createFollowUpItemFromNotification:;
+ (id)_createNotificationFromFollowUpItem:;
@end
