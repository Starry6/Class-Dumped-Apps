@interface AWEGDRequestParamsUtils : NSObject
+ (id)preMergeLogDataWithRouteParams:preGeneralTraceId:;
+ (void)mergeStringOrNumberValueToDict:byKey:withValue:;
+ (id)configRequestParamsWithUrl:preGeneralTraceId:;
@end
