@interface IESLiveInteractSpatialAudioPositionInfo : NSObject
@property (nonatomic) IESLiveInteractSpatialAudioPosition position;
@property (nonatomic) IESLiveInteractSpatialAudioHumanOrientation humanOrientation;
@property (nonatomic) BOOL applySpatialAudio;
- (BOOL)applySpatialAudio;
- (id)humanOrientation;
- (void)setApplySpatialAudio:;
- (void)setHumanOrientation:;
- (void)setPosition:;
- (id)position;
- (void).cxx_destruct;
- (BOOL)isEqual:;
@end
