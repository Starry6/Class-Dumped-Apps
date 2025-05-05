@interface VCIDRSchedulerStream : NSObject
@property (nonatomic) I keyFrameInterval;
@property (nonatomic) I framerate;
@property (nonatomic) I weightFactor;
@property (nonatomic) I framePosition;
@property (nonatomic) I framesPerIdrPeriod;
- (unsigned int)framerate;
- (id)description;
- (void)setFramerate:;
- (unsigned int)framePosition;
- (void)setFramePosition:;
- (unsigned int)keyFrameInterval;
- (void)setKeyFrameInterval:;
- (unsigned int)weightFactor;
- (void)setWeightFactor:;
- (id)initWithKeyFrameInterval:framerate:weightFactor:;
- (long long)compareWeightFactor:;
- (unsigned int)framesPerIdrPeriod;
- (void)setFramesPerIdrPeriod:;
+ (id)schedulerStreamWithKeyFrameInterval:framerate:weightFactor:;
@end
