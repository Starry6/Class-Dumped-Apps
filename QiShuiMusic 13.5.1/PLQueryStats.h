@interface PLQueryStats : NSObject
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)stopRecordingDescriptionWithFetchCount:;
+ (id)startedQueryStatsWithContext:;
+ (BOOL)allowedToTrack;
+ (id)byteCountFormatter;
@end
