@interface BMNotificationStream : NSObject
- (id)publisherFromStartTime:;
- (id)init;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)identifier;
- (void).cxx_destruct;
- (id)source;
@end
