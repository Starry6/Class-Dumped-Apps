@interface iconclassificationOutput : NSObject
@property (nonatomic) MLMultiArray leaf_leaf_predictions_probabilities;
@property (nonatomic) NSSet featureNames;
- (id)featureValueForName:;
- (id)featureNames;
- (void).cxx_destruct;
- (id)initWithLeaf_leaf_predictions_probabilities:;
- (id)leaf_leaf_predictions_probabilities;
- (void)setLeaf_leaf_predictions_probabilities:;
@end
