@interface ConvDataSource : NSObject
@property (nonatomic) ^f weights_;
@property (nonatomic) ^f bias_;
@property (nonatomic) MPSCNNConvolutionDescriptor desc_;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bias_;
- (id)desc_;
- (id)initWithWeight:bias:desc:;
- (void)setBias_:;
- (void)setDesc_:;
- (void)setWeights_:;
- (id)weights_;
- (void)purge;
- (BOOL)load;
- (id)descriptor;
- (id)rangesForUInt8Kernel;
- (unsigned int)dataType;
- (id)label;
- (id)weights;
- (id)biasTerms;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)lookupTableForUInt8Kernel;
@end
