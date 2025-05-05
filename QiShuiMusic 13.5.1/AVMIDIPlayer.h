@interface AVMIDIPlayer : NSObject
@property (nonatomic) double duration;
@property (nonatomic) BOOL playing;
@property (nonatomic) float rate;
@property (nonatomic) double currentPosition;
- (void)play:;
- (void)setRate:;
- (BOOL)isPlaying;
- (void)dealloc;
- (double)currentPosition;
- (float)rate;
- (void)stop;
- (void)finalize;
- (id)impl;
- (double)duration;
- (id)initBase;
- (void)prepareToPlay;
- (id)initWithContentsOfURL:soundBankURL:error:;
- (id)initWithData:soundBankURL:error:;
- (unsigned long long)hostTimeForBeats:;
- (double)beatsForHostTime:;
- (void)setCurrentPosition:;
- (void)destroyBase;
@end
