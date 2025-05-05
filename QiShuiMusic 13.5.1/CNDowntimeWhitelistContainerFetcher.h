@interface CNDowntimeWhitelistContainerFetcher : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) ACAccountStore accountStore;
@property (nonatomic) NSNotificationCenter notificationCenter;
@property (nonatomic) <NSObject> accountStoreDidChangeNotificationToken;
@property (nonatomic) CNContainer primaryiCloudContainer;
@property (nonatomic) CNContainer downtimeWhitelistContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)accountStore;
- (void)dealloc;
- (id)downtimeWhitelistContainer;
- (id)notificationCenter;
- (id)accountStoreDidChangeNotificationToken;
- (id)fetchPrimaryiCloudCardDAVAccountIdentifier;
- (id)primaryiCloudContainer;
- (id)fetchPrimaryiCloudCardDAVContainer;
- (void)beginObservingChangeNotifications;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:accountStore:notificationCenter:;
+ (id)os_log;
@end
