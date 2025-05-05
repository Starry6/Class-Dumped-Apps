@interface PFStoryClusteringProperties : NSObject
@property (nonatomic) NSString algorithm;
@property (nonatomic) NSDictionary algorithmProperties;
@property (nonatomic) NSDictionary distanceWeights;
- (id)algorithm;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithAlgorithmName:algorithmProperties:distanceWeights:;
- (BOOL)isEqualToPFStoryClusteringProperties:;
- (id)algorithmProperties;
- (id)distanceWeights;
@end
