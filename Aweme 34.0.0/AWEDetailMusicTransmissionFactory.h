@interface AWEDetailMusicTransmissionFactory : NSObject
+ (void)configLastPageTransmission:toNode:;
+ (BOOL)shouldTransmissionContinueWithDataContext:context:;
+ (void)attachDetailPropTransmission:toNode:;
@end
