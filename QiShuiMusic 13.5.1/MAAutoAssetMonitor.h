@interface MAAutoAssetMonitor : NSObject
@property (nonatomic) @? statusChangeNotificationBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> notificationDispatchQueue;
@property (nonatomic) NSString autoAssetClientName;
@property (nonatomic) MAAutoAssetSelector assetSelector;
- (id)initWithCoder:;
- (id)autoAssetClientName;
- (void)registerForNotifications:;
- (void)encodeWithCoder:;
- (id)summary;
- (void).cxx_destruct;
- (id)description;
- (id)assetSelector;
- (void)registerForNotifications:completion:;
- (id)initForClientName:forAssetSelector:error:notifyingStatusChanges:;
- (id)initForClientName:forAssetSelector:notifyingFromQueue:error:notifyingStatusChanges:;
- (id)registerForNotificationsSync;
- (id)registerForNotificationsSync:;
- (void)cancelRegistration:;
- (id)cancelRegistrationSync;
- (id)statusChangeNotificationBlock;
- (void)setStatusChangeNotificationBlock:;
- (id)notificationDispatchQueue;
+ (BOOL)supportsSecureCoding;
+ (id)defaultDispatchQueue;
@end
