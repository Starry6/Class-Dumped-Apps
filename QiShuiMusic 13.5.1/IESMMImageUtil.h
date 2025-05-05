@interface IESMMImageUtil : NSObject
+ (id)detectImage:withAlgorithm:timeout:scanType:;
+ (void)detectImage:withAlgorithm:timeout:scanType:withResultBlock:;
+ (id)detectImage:withScanParam:;
+ (void)detectImage:withScanParam:withResultBlock:;
+ (id)detectImageWithBuffer:withScanParam:;
@end
