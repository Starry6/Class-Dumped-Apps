@interface UIScreenMode : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double pixelAspectRatio;
- (id)valueForKey:;
- (id)initWithDisplayMode:mainScreen:actualDisplayScale:;
- (id)_displayMode;
- (void).cxx_destruct;
- (id)description;
- (id)_sizeWithLevel:;
- (double)pixelAspectRatio;
- (id)size;
+ (id)_screenModeForDisplayMode:mainScreen:actualDisplayScale:;
@end
