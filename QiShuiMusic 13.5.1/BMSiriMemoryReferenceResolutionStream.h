@interface BMSiriMemoryReferenceResolutionStream : NSObject
@property (nonatomic) NSString identifier;
- (id)publisherFromStartTime:;
- (id)init;
- (id)remoteDevices;
- (id)publishersForRemoteDevices:startTime:includeLocal:pipeline:;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)identifier;
- (void).cxx_destruct;
- (id)source;
@end
