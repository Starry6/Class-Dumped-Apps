@interface GEOMapItemPhotoOptions : NSObject
@property (nonatomic) BOOL allowSmaller;
@property (nonatomic) q preferredCropStyle;
@property (nonatomic) q preferredFormat;
- (long long)preferredFormat;
- (id)initWithAllowSmaller:cropStyle:format:;
- (BOOL)allowSmaller;
- (long long)preferredCropStyle;
+ (id)defaultPhotoOptionsWithAllowSmaller:;
+ (id)defaultPhotoOptionsWithCropStyle:;
@end
