@interface AWETransformerQualMonitor : NSObject
+ (void)trackDSLEvent:Params:;
+ (void)trackDSLErrorWithErrType:subErrName:errMsg:;
@end
