@interface IXPromisedTransferToPath : IXOwnedDataPromise
@property (nonatomic) IXPromisedTransferToPathSeed seed;
@property (nonatomic) BOOL complete;
@property (nonatomic) double percentComplete;
@property (nonatomic) NSURL transferPath;
@property (nonatomic) BOOL shouldCopy;
@property (nonatomic) BOOL tryDeltaCopy;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSeed:;
- (void)setComplete:;
- (id)initWithName:client:diskSpaceNeeded:;
- (Class)seedClass;
- (BOOL)_doInit;
- (id)initWithName:client:transferPath:diskSpaceNeeded:;
- (id)transferPath;
- (void)setTransferPath:;
- (BOOL)shouldCopy;
- (void)setShouldCopy:;
- (BOOL)tryDeltaCopy;
- (void)setTryDeltaCopy:;
+ (BOOL)supportsSecureCoding;
@end
