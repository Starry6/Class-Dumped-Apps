@interface VKRecognizedItem : NSObject
@property (nonatomic) VKQuad visionQuad;
@property (nonatomic) VNObservation observation;
@property (nonatomic) VKFrameInfo frameInfo;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) VKQuad layerQuad;
- (id)uuid;
- (void).cxx_destruct;
- (void)setObservation:;
- (id)frameInfo;
- (id)observation;
- (void)applyHomographyWarpTransform:;
- (id)initWithFrameInfo:rectangleObservation:;
- (id)visionQuad;
- (id)layerQuad;
- (BOOL)shouldAssociateWithItem:;
- (void)associateWithItem:;
@end
