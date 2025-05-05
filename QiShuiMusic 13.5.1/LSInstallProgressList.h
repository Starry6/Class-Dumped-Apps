@interface LSInstallProgressList : NSObject
- (void)removeSubscriberForPublishingKey:andBundleID:;
- (id)init;
- (void)removeProgressForBundleID:;
- (void)addSubscriber:forPublishingKey:andBundleID:;
- (id)progressForBundleID:;
- (id)subscriberForBundleID:andPublishingKey:;
- (void).cxx_destruct;
- (id)description;
- (void)setProgress:forBundleID:;
@end
