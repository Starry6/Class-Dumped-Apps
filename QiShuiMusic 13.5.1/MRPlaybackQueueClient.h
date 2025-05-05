@interface MRPlaybackQueueClient : NSObject
- (void)dealloc;
- (id)existingSubscriptionControllerForPlayerPath:;
- (id)debugDescription;
- (id)subscriptionControllerForPlayerPath:;
- (void)_handleApplicationRemovedNotification:;
- (void)_handleOriginRemovedNotification:;
- (void)_handlePlayerPathRemovedNotification:;
- (void).cxx_destruct;
- (id)initWithQueue:;
@end
