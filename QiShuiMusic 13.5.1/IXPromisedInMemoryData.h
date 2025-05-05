@interface IXPromisedInMemoryData : IXOwnedDataPromise
@property (nonatomic) IXPromisedInMemoryDataSeed seed;
- (void)resetWithCompletion:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSeed:;
- (Class)seedClass;
- (id)initWithName:client:data:;
+ (BOOL)supportsSecureCoding;
@end
