@interface AWEPayScanImageHelper : NSObject
+ (id)cropImage:points:expandSizeScale:;
+ (id)getCroppedImageDataWithOriImage:points:expandSizeScale:compressMaxLength:;
@end
