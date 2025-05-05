@interface TUCallSoundPlayerDescriptor : NSObject
@property (nonatomic) q soundType;
@property (nonatomic) NSNumber sound;
@property (nonatomic) Q iterations;
@property (nonatomic) double pauseDuration;
- (void)setSound:;
- (void)setIterations:;
- (id)sound;
- (void)setSoundType:;
- (unsigned long long)iterations;
- (void).cxx_destruct;
- (long long)soundType;
- (id)description;
- (double)pauseDuration;
- (void)setPauseDuration:;
- (id)initWithSoundType:sound:iterations:pauseDuration:;
- (id)initWithSoundType:call:;
- (id)initWithSoundType:provider:video:region:;
@end
