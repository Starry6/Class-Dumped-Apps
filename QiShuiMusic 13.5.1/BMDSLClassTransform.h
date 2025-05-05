@interface BMDSLClassTransform : BMDSLBaseCodable
@property (nonatomic) NSString className;
@property (nonatomic) NSString transformName;
- (id)className;
- (void)setClassName:;
- (id)transformName;
- (id)initWithClassName:selector:;
- (id)initWithCoder:;
- (void)setTransformName:;
- (id)transformInput:combinedState:;
- (void)encodeWithCoder:;
- (id)initWithClassName:transformName:;
- (void).cxx_destruct;
- (id)initWithName:version:className:transformName:;
+ (BOOL)supportsSecureCoding;
+ (id)withClassName:selector:;
+ (id)withClassName:transformName:;
@end
