@interface AWEIMAssetOrientationModel : NSObject
@property (nonatomic) q videoAssetOrientation;
@property (nonatomic) BOOL isPortrait;
- (void)setVideoAssetOrientation:;
- (long long)videoAssetOrientation;
- (BOOL)isPortrait;
- (void)setIsPortrait:;
@end
