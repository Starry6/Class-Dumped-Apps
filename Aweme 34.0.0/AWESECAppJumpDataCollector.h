@interface AWESECAppJumpDataCollector : NSObject
+ (void)asyncUploadEventInfoAndTrackItemToAppLogWithEvent:;
+ (void)asyncTrackAppLogWithParams:;
+ (void)asyncTrackALogWithParams:;
+ (void)asyncTrackAppLogWithParams:withSampleRate:exportTime:;
+ (void)asyncTrackUserExceptionWithParams:withSampleRate:exportTime:;
+ (BOOL)sampleCollectWithSampleRate:exportTime:;
+ (void)uploadEventInfoAndTrackItemToAppLogWithEvent:;
+ (void)asyncTrackUserExceptionWithParams:;
@end
