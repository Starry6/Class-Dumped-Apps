@interface MPSConvWeights : NSObject
@property (nonatomic) I dataType;
@property (nonatomic) MPSCNNConvolutionDescriptor descriptor;
@property (nonatomic) ^v weights;
@property (nonatomic) ^f biasTerms;
@property (nonatomic) NSString label;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataType:;
- (void)purge;
- (id)copyWithZone:device:;
- (BOOL)load;
- (id)descriptor;
- (void)setDescriptor:;
- (void)setLabel:;
- (unsigned int)dataType;
- (id)label;
- (id)weights;
- (id)biasTerms;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setWeights:;
- (void)setBiasTerms:;
@end
