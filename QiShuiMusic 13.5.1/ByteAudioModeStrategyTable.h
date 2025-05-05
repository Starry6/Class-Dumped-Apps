@interface ByteAudioModeStrategyTable : NSObject
@property (nonatomic) ByteAudioModeStrategyOption speakerPhone;
@property (nonatomic) ByteAudioModeStrategyOption earPiece;
@property (nonatomic) ByteAudioModeStrategyOption wiredHeadset;
@property (nonatomic) ByteAudioModeStrategyOption btHeadset;
- (id)initWithOption:earpiece:wiredHeadset:btHeadset:;
- (id)speakerPhone;
- (void)setSpeakerPhone:;
- (id)earPiece;
- (void)setEarPiece:;
- (id)btHeadset;
- (void)setBtHeadset:;
- (id)init;
- (void)setWiredHeadset:;
- (void).cxx_destruct;
- (id)wiredHeadset;
@end
