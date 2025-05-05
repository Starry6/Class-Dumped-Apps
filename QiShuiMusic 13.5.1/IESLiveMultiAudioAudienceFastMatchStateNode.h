@interface IESLiveMultiAudioAudienceFastMatchStateNode : NSObject
@property (nonatomic) BOOL matchStartByShake;
@property (nonatomic) BOOL lastInteractByShake;
@property (nonatomic) BOOL isFirstMatch;
@property (nonatomic) BOOL finished;
- (BOOL)isFirstMatch;
- (BOOL)lastInteractByShake;
- (BOOL)matchStartByShake;
- (void)setIsFirstMatch:;
- (void)setLastInteractByShake:;
- (void)setMatchStartByShake:;
- (void)setFinished:;
- (BOOL)finished;
@end
