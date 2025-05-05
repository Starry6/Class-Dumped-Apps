@interface IMDScreenTimeAskNotificationContext : NSObject
@property (nonatomic) NSArray actions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setActions:;
- (BOOL)canPopulateUserInfoForMessageBalloonBundleID:;
- (id)notificationCategories;
- (id)actions;
- (void)populateUserInfoForNotificationContent:messageBalloonBundleID:payloadData:;
- (void).cxx_destruct;
@end
