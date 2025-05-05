@interface BDADAppDownloadReporter : NSObject
+ (id)signatureWithHMAC:secretKey:;
+ (void)report:;
@end
