@interface ICURLBagLibraryDAAPConfiguration : NSObject
@property (nonatomic) q databaseID;
@property (nonatomic) NSString databaseName;
@property (nonatomic) NSString baseURL;
@property (nonatomic) BOOL onlineGeniusForMatchEnabled;
@property (nonatomic) q playDataBatchIntervalInMinutes;
@property (nonatomic) q subscribedContainerPollingFrequencySeconds;
@property (nonatomic) q updatePollingFrequencySeconds;
@property (nonatomic) q autoUpdatePollingFrequencySeconds;
@property (nonatomic) Q maxSyncRetryIntervalSeconds;
- (id)databaseName;
- (long long)databaseID;
- (id)baseURL;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBagLibraryDAAPDictionary:;
- (BOOL)isOnlineGeniusForMatchEnabled;
- (long long)playDataBatchIntervalInMinutes;
- (long long)subscribedContainerPollingFrequencySeconds;
- (long long)updatePollingFrequencySeconds;
- (long long)autoUpdatePollingFrequencySeconds;
- (unsigned long long)maxSyncRetryIntervalSeconds;
@end
