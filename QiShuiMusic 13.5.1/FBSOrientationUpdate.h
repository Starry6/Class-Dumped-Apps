@interface FBSOrientationUpdate : NSObject
@property (nonatomic) q orientation;
@property (nonatomic) Q sequenceNumber;
@property (nonatomic) double duration;
@property (nonatomic) q rotationDirection;
- (id)init;
- (long long)orientation;
- (void)setDuration:;
- (void)setSequenceNumber:;
- (id)initWithOrientation:sequenceNumber:duration:rotationDirection:;
- (unsigned long long)sequenceNumber;
- (long long)rotationDirection;
- (id)description;
- (void)setRotationDirection:;
- (double)duration;
- (void)setOrientation:;
@end
