@interface ARInertialState : NSObject
@property (nonatomic) ^d covarianceMatrix;
@property (nonatomic) {?=[3]} orientation;
@property (nonatomic)  position;
@property (nonatomic)  velocity;
@property (nonatomic)  accelerometerBias;
@property (nonatomic)  gyroscopeBias;
- (void)setPosition:;
- (id)velocity;
- (id)position;
- (void)setVelocity:;
- (id)orientation;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)isEqual:;
- (void)setOrientation:;
- (id)initWithCovarianceMatrix:;
- (id)covarianceMatrix;
- (id)accelerometerBias;
- (void)setAccelerometerBias:;
- (id)gyroscopeBias;
- (void)setGyroscopeBias:;
+ (BOOL)supportsSecureCoding;
@end
