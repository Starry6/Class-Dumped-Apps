@interface KeyPitch : NSObject
@property (nonatomic) double frequency;
@property (nonatomic) double volume;
@property (nonatomic) double timeOffsetMS;
- (double)frequency;
- (double)volume;
- (void)setFrequency:;
- (void)setVolume:;
- (id)description;
- (id)initWithFrequency:volume:timeOffset:;
- (double)timeOffsetMS;
- (void)setTimeOffsetMS:;
@end
