@interface AMSPushConfiguration : NSObject
@property (nonatomic) <AMSPushHandlerDelegate> delegate;
@property (nonatomic) NSString engagementPushTopic;
@property (nonatomic) NSString userNotificationExtensionId;
@property (nonatomic) NSSet enabledActionTypes;
- (id)enabledActionTypes;
- (void)setDelegate:;
- (void)setUserNotificationExtensionId:;
- (id)engagementPushTopic;
- (id)userNotificationExtensionId;
- (id)delegate;
- (void)setEnabledActionTypes:;
- (id)initWithEnabledActionTypes:;
- (void).cxx_destruct;
- (void)setEngagementPushTopic:;
@end
