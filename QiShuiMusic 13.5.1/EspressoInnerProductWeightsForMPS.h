@interface EspressoInnerProductWeightsForMPS : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)ready;
- (void)purge;
- (BOOL)load;
- (id)descriptor;
- (id)rangesForUInt8Kernel;
- (id)initWithParams:;
- (unsigned int)dataType;
- (id)label;
- (id)weights;
- (id)biasTerms;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:;
- (id)lookupTableForUInt8Kernel;
@end
