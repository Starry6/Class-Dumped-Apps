@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed
@property (nonatomic) NSURL transferPath;
@property (nonatomic) BOOL shouldCopy;
@property (nonatomic) BOOL tryDeltaCopy;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (Class)clientPromiseClass;
- (id)transferPath;
- (void)setTransferPath:;
- (BOOL)shouldCopy;
- (void)setShouldCopy:;
- (BOOL)tryDeltaCopy;
- (void)setTryDeltaCopy:;
+ (BOOL)supportsSecureCoding;
@end
