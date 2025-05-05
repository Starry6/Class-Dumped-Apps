@interface IXPromisedOutOfBandTransferSeed : IXOpaqueDataPromiseSeed
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (Class)clientPromiseClass;
+ (BOOL)supportsSecureCoding;
@end
