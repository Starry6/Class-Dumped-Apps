@interface BMSoundDetectionStream : NSObject
@property (nonatomic) NSString identifier;
- (id)publisherFromStartTime:;
- (id)init;
- (id)publisherWithStartTime:endTime:maxEvents:reversed:;
- (id)publisherWithStartTime:endTime:maxEvents:lastN:reversed:;
- (id)publisher;
- (id)identifier;
- (void).cxx_destruct;
- (id)source;
- (id)publisherWithStartTime:withEndTime:withMaxEvents:reversed:;
@end
