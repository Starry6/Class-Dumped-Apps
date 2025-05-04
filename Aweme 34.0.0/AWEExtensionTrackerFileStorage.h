@interface AWEExtensionTrackerFileStorage : AWEExtensionStorage
@property (nonatomic) NSArray trackedEvents;
@property (nonatomic) NSURL fileURL;
- (void)trackEvent:params:needStagingFlag:;
- (id)trackedEvents;
- (void)setTrackedEvents:;
- (id)fileURL;
- (void)setFileURL:;
- (void).cxx_destruct;
- (void)reset;
+ (id)sharedTrackerStorage;
@end
