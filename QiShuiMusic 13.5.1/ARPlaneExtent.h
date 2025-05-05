@interface ARPlaneExtent : NSObject
@property (nonatomic) float rotationOnYAxis;
@property (nonatomic) float width;
@property (nonatomic) float height;
- (id)init;
- (void)setWidth:;
- (id)initWithCoder:;
- (float)height;
- (void)encodeWithCoder:;
- (float)width;
- (void)setHeight:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (float)rotationOnYAxis;
- (void)setRotationOnYAxis:;
+ (BOOL)supportsSecureCoding;
@end
