@interface AWESearchAdImageStatistics : NSObject
+ (void)recordAdImageFilterResultWithPageUrl:frontendConfig:modelName:imgUrl:score:filterDict:extraInfo:;
+ (void)recordErrorWithType:msg:code:extraInfo:;
+ (void)recordCost:type:;
@end
