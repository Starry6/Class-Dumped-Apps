@interface DESFedStatsRecorder : NSObject
- (BOOL)record:data:dataTypeContent:metadata:errorOut:;
- (BOOL)record:data:encodingSchema:metadata:errorOut:;
@end
