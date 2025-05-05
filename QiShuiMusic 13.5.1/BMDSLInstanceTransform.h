@interface BMDSLInstanceTransform : BMDSL
@property (nonatomic) NSString transformName;
- (id)transformName;
- (id)initWithCoder:;
- (void)setTransformName:;
- (id)transformInput:combinedState:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithSelector:;
- (id)initWithName:version:transformName:;
+ (BOOL)supportsSecureCoding;
+ (id)withSelector:;
@end
