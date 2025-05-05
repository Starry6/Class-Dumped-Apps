@interface CIBurstFaceConfigEntry : NSObject
@property (nonatomic) NSInteger faceId;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} faceRect;
@property (nonatomic) NSInteger framesSinceLast;
- (id)initWithRect:withFaceId:;
- (int)faceId;
- (void)setFaceId:;
- (id)faceRect;
- (void)setFaceRect:;
- (int)framesSinceLast;
- (void)setFramesSinceLast:;
@end
