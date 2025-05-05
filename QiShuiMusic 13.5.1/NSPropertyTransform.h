@interface NSPropertyTransform : NSObject
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPropertyName:valueExpression:;
+ (BOOL)supportsSecureCoding;
@end
