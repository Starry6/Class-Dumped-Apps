@interface AWETeenLandscapeHelper : NSObject
@property (nonatomic) BOOL isIPAlbumRequestOnAir;
- (BOOL)isIPAlbumRequestOnAir;
- (void)setIsIPAlbumRequestOnAir:;
+ (BOOL)isAlertViewShowing;
+ (id)sharedInstance;
@end
