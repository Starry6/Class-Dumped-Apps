@interface ICURLBagRadioConfiguration : NSObject
@property (nonatomic) NSURL baseURL;
@property (nonatomic) q getTracksDPInfoKBSyncCount;
@property (nonatomic) q maxSupportedProtocolVersion;
@property (nonatomic) BOOL continueListeningAvailable;
@property (nonatomic) q continueListeningMaxQueueSizeInRequest;
@property (nonatomic) q continueListeningMaxUpcomingTracksSizeToMaintain;
@property (nonatomic) q continueListeningLoadStationThreshold;
- (id)baseURL;
- (long long)getTracksDPInfoKBSyncCount;
- (BOOL)isContinueListeningAvailable;
- (BOOL)shouldIncludeHTTPHeaderField:forRequestURL:;
- (id)initWithBagRadioDictionary:;
- (long long)continueListeningMaxUpcomingTracksSizeToMaintain;
- (long long)continueListeningLoadStationThreshold;
- (void).cxx_destruct;
- (long long)maxSupportedProtocolVersion;
- (long long)continueListeningMaxQueueSizeInRequest;
- (id)urlForBagRadioKey:;
@end
