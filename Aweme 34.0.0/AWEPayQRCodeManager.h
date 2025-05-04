@interface AWEPayQRCodeManager : NSObject
+ (id)createSKMDownloadImage:userName:maskName:amountStr:tips:userIconImage:;
+ (id)createQRCodeWithString:;
@end
