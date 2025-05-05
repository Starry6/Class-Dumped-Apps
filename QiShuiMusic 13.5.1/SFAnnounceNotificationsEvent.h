@interface SFAnnounceNotificationsEvent : NSObject
@property (nonatomic) BOOL tappedInitialEnable;
@property (nonatomic) BOOL tappedCustomize;
@property (nonatomic) BOOL tappedNotNow;
@property (nonatomic) BOOL tappedDismissButton;
@property (nonatomic) BOOL customizedApps;
@property (nonatomic) NSDictionary eventPayload;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)eventPayload;
- (void)submitEvent;
- (BOOL)tappedInitialEnable;
- (void)setTappedInitialEnable:;
- (BOOL)tappedCustomize;
- (void)setTappedCustomize:;
- (BOOL)tappedNotNow;
- (void)setTappedNotNow:;
- (BOOL)tappedDismissButton;
- (void)setTappedDismissButton:;
- (BOOL)customizedApps;
- (void)setCustomizedApps:;
+ (id)eventName;
@end
