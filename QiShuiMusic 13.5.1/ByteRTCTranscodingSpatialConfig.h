@interface ByteRTCTranscodingSpatialConfig : NSObject
@property (nonatomic) BOOL enableSpatialRender;
@property (nonatomic) ByteRTCPosition audienceSpatialPosition;
@property (nonatomic) ByteRTCHumanOrientation audienceSpatialOrientation;
- (id)audienceSpatialOrientation;
- (id)audienceSpatialPosition;
- (BOOL)enableSpatialRender;
- (void)setAudienceSpatialOrientation:;
- (void)setAudienceSpatialPosition:;
- (void)setEnableSpatialRender:;
- (id)init;
- (void).cxx_destruct;
@end
