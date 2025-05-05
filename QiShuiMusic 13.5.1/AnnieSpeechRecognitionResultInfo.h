@interface AnnieSpeechRecognitionResultInfo : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL isInterIM;
@property (nonatomic) q indexOfOneConnection;
@property (nonatomic) double confidence;
- (long long)indexOfOneConnection;
- (BOOL)isInterIM;
- (void)setIndexOfOneConnection:;
- (void)setIsInterIM:;
- (double)confidence;
- (void)setConfidence:;
- (void)setText:;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (void).cxx_destruct;
- (id)text;
+ (id)modelCustomPropertyMapper;
@end
