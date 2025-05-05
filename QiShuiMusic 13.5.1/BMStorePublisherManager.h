@interface BMStorePublisherManager : NSObject
- (id)publisherFromStartTime:;
- (id)publishersForRemoteDevices:startTime:includeLocal:pipeline:;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)_streamReaderWithStoreLocation:remoteStreamName:;
- (id)publishersForRemoteDevices:startTime:endTime:maxEvents:lastN:reversed:includeLocal:pipeline:;
- (id)initWithStreamIdentifier:streamConfig:accessClient:;
- (id)_openStreamReaderWithStoreLocation:remoteStreamName:;
- (id)_publisherWithStoreLocation:remoteStreamName:;
- (id)_publishersForRemoteDevices:includeLocal:;
- (void).cxx_destruct;
- (id)publisherWithStartTime:withEndTime:withMaxEvents:reversed:;
@end
