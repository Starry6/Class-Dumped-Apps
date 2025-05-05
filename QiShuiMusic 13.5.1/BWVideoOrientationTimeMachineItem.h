@interface BWVideoOrientationTimeMachineItem : NSObject
@property (nonatomic) double ptsSeconds;
@property (nonatomic) s exifOrientation;
- (short)exifOrientation;
- (void)setExifOrientation:;
- (id)description;
- (id)initWithPTSSeconds:exifOrientation:;
- (double)ptsSeconds;
- (void)setPtsSeconds:;
@end
