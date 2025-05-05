@interface IXOpaqueDataPromise : IXDataPromise
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (Class)seedClass;
+ (BOOL)supportsSecureCoding;
@end
