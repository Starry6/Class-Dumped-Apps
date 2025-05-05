@interface SANotificationsSearchCompleted : SABaseCommand
@property (nonatomic) NSArray notifications;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)notifications;
- (id)groupIdentifier;
- (void)setNotifications:;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)notificationsSearchCompleted;
+ (id)notificationsSearchCompletedWithDictionary:context:;
@end
