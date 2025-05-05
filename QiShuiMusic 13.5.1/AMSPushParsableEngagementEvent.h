@interface AMSPushParsableEngagementEvent : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldSkipAccountCheck;
+ (void)handleNotificationPayload:config:bag:;
+ (id)_eventForMapiPayload:account:bag:;
+ (id)_eventForStaticAssetPayload:bag:;
+ (void)_waitForPromises:completion:;
@end
