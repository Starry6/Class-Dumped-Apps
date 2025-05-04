@interface AWEVideoDraftVoiceChangerModel : NSObject
@property (nonatomic) NSString voiceChangerChallengeID;
@property (nonatomic) NSString voiceChangerChallengeName;
@property (nonatomic) NSArray voiceEffectSegments;
- (void)setVoiceChangerChallengeID:;
- (void)setVoiceChangerChallengeName:;
- (void)setVoiceEffectSegments:;
- (id)voiceChangerChallengeID;
- (id)voiceChangerChallengeName;
- (id)voiceEffectSegments;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
