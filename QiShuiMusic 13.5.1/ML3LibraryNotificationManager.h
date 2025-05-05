@interface ML3LibraryNotificationManager : NSObject
@property (nonatomic) ML3MusicLibrary library;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserverWithDistributedName:;
- (void)enqueueLocalNotification:;
- (void)enqueueDistributedNotificationNamed:;
- (id)initWithLibrary:distributedAndLocalNames:;
- (id)library;
- (void).cxx_destruct;
- (id)_observerForLocalName:;
- (BOOL)observerShouldForwardDistributedNotification:;
- (void)addObserverForDistributedName:localName:;
- (void)enqueueLocalNotificationNamed:;
- (void)_postEnqueuedDistributedNotifications;
- (id)_observerForDistributedName:;
- (void)removeObserverWithLocalName:;
- (void)_postEnqueuedLocalNotifications;
@end
