@interface DOCFPItemCollectionManager : NSObject
@property (nonatomic) NSArray observingCollections;
@property (nonatomic) NSArray notificationObservances;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForegroundNotification;
- (void)collectionDidStartObserving:;
- (void)collectionDidStopObserving:;
- (id)observingCollections;
- (id)notificationObservances;
+ (id)sharedManager;
@end
