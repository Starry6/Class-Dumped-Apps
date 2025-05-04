@interface AWEDetailMVTransmissionFactory : NSObject
+ (void)configTrendCommonTransmission:toNode:;
+ (void)configLastPageTransmission:toNode:;
+ (BOOL)shouldTransmissionContinueWithContext:;
+ (void)attachDetailMVTransmission:toNode:;
@end
