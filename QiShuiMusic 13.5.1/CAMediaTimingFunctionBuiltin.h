@interface CAMediaTimingFunctionBuiltin : CAMediaTimingFunction
- (id)initWithCoder:;
- (void)_getPoints:;
- (void)encodeWithCAMLWriter:;
- (id)description;
- (Class)classForCoder;
+ (BOOL)supportsSecureCoding;
@end
