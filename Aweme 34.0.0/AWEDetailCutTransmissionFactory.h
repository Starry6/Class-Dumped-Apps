@interface AWEDetailCutTransmissionFactory : NSObject
+ (void)configTrendCommonTransmission:toNode:;
+ (void)configLastPageTransmission:toNode:;
+ (BOOL)shouldTransmissionContinueWithContext:;
+ (void)attachDetailCutTransmission:toNode:;
@end
