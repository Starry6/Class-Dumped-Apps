@interface TSAudioTimeErrorValue : NSObject
@property (nonatomic) double sampleTimestamp;
@property (nonatomic) double timeError;
- (id)description;
- (id)initWithSampleTimestamp:andTimeError:;
- (double)sampleTimestamp;
- (double)timeError;
@end
