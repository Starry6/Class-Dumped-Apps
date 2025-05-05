@interface VCPCNNMPSDataSource : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)purge;
- (id)copyWithZone:device:;
- (BOOL)load;
- (id)descriptor;
- (unsigned int)dataType;
- (id)label;
- (id)weights;
- (id)biasTerms;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWith:convolutionDescriptor:kernelWeights:biasTerm:;
@end
