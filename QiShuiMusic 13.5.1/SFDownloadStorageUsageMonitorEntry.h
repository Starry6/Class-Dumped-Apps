@interface SFDownloadStorageUsageMonitorEntry : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSProgress progress;
@property (nonatomic) @ progressSubscriber;
@property (nonatomic) NSString destinationPath;
@property (nonatomic) NSData progressData;
@property (nonatomic) q cachedUsage;
@property (nonatomic) <SFDownloadStorageUsageMonitorEntryDelegate> delegate;
- (void)setDestinationPath:;
- (void)updateWithDictionaryRepresentation:;
- (void)setDelegate:;
- (void)setProgress:;
- (id)identifier;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)progress;
- (id)destinationPath;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)_didGainProgress:;
- (void)_didLoseProgress:;
- (void)_updateProgressSubscriptionWithData:;
- (id)progressSubscriber;
- (void)setProgressSubscriber:;
- (id)progressData;
- (void)setProgressData:;
- (long long)cachedUsage;
- (void)setCachedUsage:;
@end
