@interface AWEDetailPropTransmissionFactory : NSObject
+ (void)configTrendCommonTransmission:toNode:;
+ (void)configLastPageTransmission:toNode:;
+ (BOOL)shouldTransmissionContinueWithContext:;
+ (void)attachDetailPropTransmission:toNode:;
@end
