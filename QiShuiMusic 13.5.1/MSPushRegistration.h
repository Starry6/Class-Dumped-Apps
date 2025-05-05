@interface MSPushRegistration : MSMailDefaultService
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSString accountIdentifier;
@property (nonatomic) NSString notificationNamePrefix;
@property (nonatomic) NSArray mailboxNames;
- (id)init;
- (id)bundleIdentifier;
- (void)setAccountIdentifier:;
- (id)accountIdentifier;
- (void)setBundleIdentifier:;
- (void).cxx_destruct;
- (void)registerForPush:;
- (id)notificationNamePrefix;
- (void)setNotificationNamePrefix:;
- (id)mailboxNames;
- (void)setMailboxNames:;
@end
