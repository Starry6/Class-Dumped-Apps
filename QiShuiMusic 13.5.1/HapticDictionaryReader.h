@interface HapticDictionaryReader : NSObject
- (id)readAndVerifyVersion:error:;
- (id)parseConfiguration:error:;
- (id)scanForEmbeddedResources:;
- (BOOL)parseEventsAndParameters:withBaseURL:reply:;
- (id)parseEvent:withBaseURL:;
- (id)parseEventParams:;
- (id)parseParam:;
- (id)parseParamCurve:;
- (id)parseParamCurveControlPoints:;
@end
