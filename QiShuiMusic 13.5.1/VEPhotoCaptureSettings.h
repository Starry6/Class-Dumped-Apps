@interface VEPhotoCaptureSettings : NSObject
@property (nonatomic) q flashMode;
@property (nonatomic) BOOL highResolutionPhotoEnabled;
- (void)setFlashMode:;
- (long long)flashMode;
- (BOOL)highResolutionPhotoEnabled;
- (void)setHighResolutionPhotoEnabled:;
@end
