@interface CIFaceFeature : CIFeature
@property (nonatomic) NSDictionary landmarks;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) BOOL hasLeftEyePosition;
@property (nonatomic) {CGPoint=dd} leftEyePosition;
@property (nonatomic) BOOL hasRightEyePosition;
@property (nonatomic) {CGPoint=dd} rightEyePosition;
@property (nonatomic) BOOL hasMouthPosition;
@property (nonatomic) {CGPoint=dd} mouthPosition;
@property (nonatomic) BOOL hasTrackingID;
@property (nonatomic) NSInteger trackingID;
@property (nonatomic) BOOL hasTrackingFrameCount;
@property (nonatomic) NSInteger trackingFrameCount;
@property (nonatomic) BOOL hasFaceAngle;
@property (nonatomic) float faceAngle;
@property (nonatomic) BOOL hasSmile;
@property (nonatomic) BOOL leftEyeClosed;
@property (nonatomic) BOOL rightEyeClosed;
- (void)dealloc;
- (id)debugDescription;
- (id)type;
- (int)trackingID;
- (id)bounds;
- (id)landmarks;
- (id)initWithBounds:hasLeftEyePosition:leftEyePosition:hasRightEyePosition:rightEyePosition:hasMouthPosition:mouthPosition:hasFaceAngle:faceAngle:hasTrackingID:trackingID:hasTrackingFrameCount:trackingFrameCount:hasSmile:leftEyeClosed:rightEyeClosed:landmarks:;
- (BOOL)hasLeftEyePosition;
- (id)leftEyePosition;
- (BOOL)hasRightEyePosition;
- (id)rightEyePosition;
- (BOOL)hasMouthPosition;
- (id)mouthPosition;
- (BOOL)hasTrackingID;
- (BOOL)hasTrackingFrameCount;
- (int)trackingFrameCount;
- (BOOL)hasFaceAngle;
- (float)faceAngle;
- (BOOL)hasSmile;
- (BOOL)leftEyeClosed;
- (BOOL)rightEyeClosed;
@end
