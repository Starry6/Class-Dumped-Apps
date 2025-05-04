@interface AWEExtensionTrackerStorage : AWEExtensionStorage
@property (nonatomic) NSArray trackedEvents;
@property (nonatomic) NSString trackedEventStorageKey;
- (void)trackEvent:params:needStagingFlag:;
- (id)trackedEvents;
- (void)setTrackedEvents:;
- (id)trackedEventStorageKey;
- (void)reset;
+ (id)sharedTrackerStorage;
@end
