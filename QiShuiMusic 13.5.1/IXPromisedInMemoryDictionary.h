@interface IXPromisedInMemoryDictionary : IXOwnedDataPromise
@property (nonatomic) IXPromisedInMemoryDictionarySeed seed;
- (void)resetWithCompletion:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithSeed:;
- (id)initWithName:client:dictionary:;
- (Class)seedClass;
+ (BOOL)supportsSecureCoding;
@end
