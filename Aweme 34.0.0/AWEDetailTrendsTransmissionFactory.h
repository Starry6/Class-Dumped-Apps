@interface AWEDetailTrendsTransmissionFactory : NSObject
+ (void)configTrendCommonTransmission:toNode:;
+ (void)configLastPageTransmission:toNode:;
+ (void)attachDetailTrendsTransmission:toNode:;
+ (id)shareVideoTransmissionNode:;
+ (BOOL)shouldTransmissionContinueWithModel:context:;
@end
