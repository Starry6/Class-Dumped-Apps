@interface IKLink : NSObject
@property (nonatomic) SKNode node;
@property (nonatomic) (_GLKVector2={?=ff}{?=ff}[2f]) position;
@property (nonatomic) float angleInitial;
@property (nonatomic) float angle;
@property (nonatomic) float length;
@property (nonatomic) (_GLKVector2={?=ff}{?=ff}[2f]) size;
- (void)setPosition:;
- (id)node;
- (id)position;
- (id)initWithNode:;
- (void).cxx_destruct;
- (float)length;
- (void)setLength:;
- (float)angle;
- (void)setSize:;
- (id)size;
- (void)setNode:;
- (double)normalizeAngle:;
- (void)rotateByAngle:;
- (float)angleInitial;
- (void)setAngleInitial:;
@end
