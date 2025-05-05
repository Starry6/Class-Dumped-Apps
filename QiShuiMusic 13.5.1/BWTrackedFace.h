@interface BWTrackedFace : NSObject
@property (nonatomic) @ trackingID;
@property (nonatomic) float trackingDistance;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} trackingRect;
@property (nonatomic) @ detectionID;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} detectionRect;
@property (nonatomic) float size;
@property (nonatomic) float distance;
- (float)distance;
- (void)dealloc;
- (void)setTrackingID:;
- (id)trackingID;
- (float)size;
- (id)detectionRect;
- (void)setDetectionRect:;
- (float)trackingDistance;
- (void)setTrackingDistance:;
- (id)trackingRect;
- (void)setTrackingRect:;
- (id)detectionID;
@end
