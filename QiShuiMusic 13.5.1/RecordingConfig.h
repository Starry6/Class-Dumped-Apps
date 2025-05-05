@interface RecordingConfig : NSObject
@property (nonatomic) NSMutableArray events;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) BOOL enabled;
@property (nonatomic) NSDate recordStartTime;
@property (nonatomic) NSString recordingName;
@property (nonatomic) q eventCount;
- (id)init;
- (id)toDictionary;
- (id)events;
- (void)setEvents:;
- (BOOL)isRecording;
- (void)setIsRecording:;
- (BOOL)enabled;
- (void)setEnabled:;
- (id)recordStartTime;
- (void)setRecordStartTime:;
- (id)recordingName;
- (void)setRecordingName:;
- (long long)eventCount;
- (void)setEventCount:;
- (void).cxx_destruct;
+ (id)fromDictionary:;
@end
