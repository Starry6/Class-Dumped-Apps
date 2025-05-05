@interface PSBrightnessController : NSObject
@property (nonatomic) @? isTracking;
@property (nonatomic) @? brightnessChangedExternally;
- (id)isTracking;
- (void).cxx_destruct;
- (void)setIsTracking:;
- (id)brightnessChangedExternally;
- (void)setBrightnessChangedExternally:;
+ (id)sharedController;
@end
