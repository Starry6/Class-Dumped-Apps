@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise
@property (nonatomic) IXPromisedOutOfBandTransferSeed seed;
@property (nonatomic) BOOL complete;
@property (nonatomic) double percentComplete;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSeed:;
- (id)initWithName:client:diskSpaceNeeded:;
- (Class)seedClass;
+ (BOOL)supportsSecureCoding;
@end
