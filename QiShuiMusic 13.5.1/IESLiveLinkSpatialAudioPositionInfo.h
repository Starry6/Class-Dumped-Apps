@interface IESLiveLinkSpatialAudioPositionInfo : NSObject
@property (nonatomic) IESLiveLinkSpatialAudioPosition position;
@property (nonatomic) IESLiveLinkSpatialAudioHumanOrientation humanOrientation;
- (id)humanOrientation;
- (void)setHumanOrientation:;
- (void)setPosition:;
- (id)position;
- (void).cxx_destruct;
@end
