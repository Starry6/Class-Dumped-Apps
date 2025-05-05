@interface MontrealNNModelOptimizerParam : MontrealNNDescription
@property (nonatomic) Q optimizerType;
@property (nonatomic) float learningRate;
@property (nonatomic) float momentum;
@property (nonatomic) NSNumber gradientClipMin;
@property (nonatomic) NSNumber gradientClipMax;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (float)learningRate;
- (float)momentum;
- (void)description:indent:;
- (id)initWithOptimizerType:learningRate:momentum:gradientClipMin:gradientClipMax:;
- (unsigned long long)optimizerType;
- (id)gradientClipMin;
- (id)gradientClipMax;
@end
