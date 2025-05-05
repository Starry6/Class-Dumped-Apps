@interface MPSWeightsWrapper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)purge;
- (BOOL)load;
- (id)descriptor;
- (void)dealloc;
- (id)rangesForUInt8Kernel;
- (unsigned int)dataType;
- (id)label;
- (id)weights;
- (id)biasTerms;
- (id)copyWithZone:;
- (id)lookupTableForUInt8Kernel;
- (id)initWithSource:neuronInfo:batchNorm:;
@end
