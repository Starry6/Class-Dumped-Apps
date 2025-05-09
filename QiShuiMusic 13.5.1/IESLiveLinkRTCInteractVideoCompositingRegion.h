@interface IESLiveLinkRTCInteractVideoCompositingRegion : NSObject
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) q zOrder;
@property (nonatomic) double alpha;
@property (nonatomic) q contentControl;
@property (nonatomic) NSString strUID;
@property (nonatomic) NSString strRID;
@property (nonatomic) IESLiveLinkSpatialAudioPosition spatialPosition;
@property (nonatomic) IESLiveLinkSpatialAudioHumanOrientation audienceSpatialOrientation;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL applySpatialAudio;
@property (nonatomic) Q renderMode;
- (BOOL)applySpatialAudio;
- (id)audienceSpatialOrientation;
- (long long)contentControl;
- (void)setApplySpatialAudio:;
- (void)setAudienceSpatialOrientation:;
- (void)setContentControl:;
- (void)setSpatialPosition:;
- (void)setStrRID:;
- (void)setStrUID:;
- (id)strRID;
- (id)strUID;
- (id)init;
- (void)setX:;
- (void)setY:;
- (double)y;
- (void)setAlpha:;
- (void)setWidth:;
- (void)setRenderMode:;
- (double)x;
- (double)height;
- (unsigned long long)renderMode;
- (double)width;
- (double)alpha;
- (void)setCornerRadius:;
- (BOOL)isEqualTo:;
- (void)setHeight:;
- (void).cxx_destruct;
- (double)cornerRadius;
- (long long)zOrder;
- (id)spatialPosition;
- (void)setZOrder:;
@end
