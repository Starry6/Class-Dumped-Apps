@interface ABUTrackReportResult : NSObject
@property (nonatomic) BOOL status;
@property (nonatomic) q times;
@property (nonatomic) q uploadSize;
@property (nonatomic) NSMutableDictionary reasons;
@property (nonatomic) q avgDuration;
@property (nonatomic) NSMutableDictionary errors;
- (void)setAvgDuration:;
- (long long)avgDuration;
- (void)setStatus:;
- (id)init;
- (void)setErrors:;
- (id)toDictionary;
- (void)setUploadSize:;
- (id)reasons;
- (void).cxx_destruct;
- (id)errors;
- (BOOL)status;
- (long long)uploadSize;
- (void)setReasons:;
- (long long)times;
- (void)setTimes:;
@end
