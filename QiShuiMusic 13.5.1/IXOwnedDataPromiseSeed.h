@interface IXOwnedDataPromiseSeed : IXDataPromiseSeed
@property (nonatomic) NSURL stagingBaseDir;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (Class)clientPromiseClass;
- (id)stagingBaseDir;
- (void)setStagingBaseDir:;
+ (BOOL)supportsSecureCoding;
@end
