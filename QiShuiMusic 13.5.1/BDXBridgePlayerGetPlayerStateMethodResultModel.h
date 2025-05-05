@interface BDXBridgePlayerGetPlayerStateMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString playback_state;
@property (nonatomic) NSNumber status_code;
@property (nonatomic) BDXBridgePlayerGetPlayerStatePlayingPlaySource playing_play_source;
@property (nonatomic) BDXBridgePlayerGetPlayerStatePlayingPlayable playing_playable;
- (id)playback_state;
- (id)playing_play_source;
- (id)playing_playable;
- (void)setPlayback_state:;
- (void)setPlaying_play_source:;
- (void)setPlaying_playable:;
- (void).cxx_destruct;
- (void)setStatus_code:;
- (id)status_code;
+ (id)playing_playableJSONTransformer;
+ (id)playing_play_sourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
