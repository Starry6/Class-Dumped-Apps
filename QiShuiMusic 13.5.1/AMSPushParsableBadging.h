@interface AMSPushParsableBadging : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)shouldSkipAccountCheck;
+ (void)handleNotificationPayload:config:bag:;
+ (void)_performLegacyCallbackWithRequest:payload:config:bag:error:;
@end
