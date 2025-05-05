@interface PLPhotoEditExportProperties : NSObject
@property (nonatomic) q baseEXIFOrientation;
@property (nonatomic) double baseDuration;
@property (nonatomic) Q imageWidth;
@property (nonatomic) Q imageHeight;
- (double)baseDuration;
- (unsigned long long)imageWidth;
- (long long)baseEXIFOrientation;
- (unsigned long long)imageHeight;
+ (id)exportPropertiesWithImageWidth:imageHeight:exifOrientation:;
+ (id)exportPropertiesWithImageWidth:imageHeight:exifOrientation:duration:;
@end
