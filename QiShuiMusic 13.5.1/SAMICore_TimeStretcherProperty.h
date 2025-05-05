@interface SAMICore_TimeStretcherProperty : NSObject
@property (nonatomic) float scale;
@property (nonatomic) BOOL reservingPitch;
- (BOOL)reservingPitch;
- (void)setReservingPitch:;
- (void)setScale:;
- (float)scale;
@end
