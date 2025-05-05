@interface PLClientChangePublisher : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAssetsdClient:;
- (id)publishChangeEvent:delayedSaveActionsDetail:transaction:;
- (void).cxx_destruct;
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
@end
