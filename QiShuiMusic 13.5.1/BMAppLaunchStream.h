@interface BMAppLaunchStream : NSObject
@property (nonatomic) NSString identifier;
- (id)publisherFromStartTime:;
- (id)init;
- (id)remoteDevices;
- (id)publishersForRemoteDevices:startTime:includeLocal:pipeline:;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)initWithConfig:;
- (id)identifier;
- (id)publishersForRemoteDevices:startTime:endTime:maxEvents:lastN:reversed:includeLocal:pipeline:;
- (void).cxx_destruct;
- (id)source;
@end
