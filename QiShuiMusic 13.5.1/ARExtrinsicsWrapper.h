@interface ARExtrinsicsWrapper : NSObject
@property (nonatomic) {?=[4]} matrix;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)matrix;
- (id)initWithMatrix:;
+ (BOOL)supportsSecureCoding;
@end
