@interface BEFGameViewTouchData : NSObject
@property (nonatomic) Q identify;
@property (nonatomic) Q actionType;
@property (nonatomic) {CGPoint=dd} pos;
@property (nonatomic) double pressureForce;
@property (nonatomic) double majorRadius;
@property (nonatomic) double timestamp;
- (double)pressureForce;
- (void)setPressureForce:;
- (id)pos;
- (unsigned long long)actionType;
- (void)setActionType:;
- (void)setTimestamp:;
- (double)majorRadius;
- (double)timestamp;
- (void)setPos:;
- (void)setMajorRadius:;
- (id)initWithTouch:;
- (unsigned long long)identify;
- (void)setIdentify:;
@end
