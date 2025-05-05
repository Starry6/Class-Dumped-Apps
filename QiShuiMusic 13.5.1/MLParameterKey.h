@interface MLParameterKey : MLKey
- (id)initWithKeyName:;
- (id)scopedTo:;
- (id)deletingPrefixingScope:;
+ (id)seed;
+ (id)biases;
+ (id)updateType;
+ (id)maxDepth;
+ (id)weights;
+ (id)learningRate;
+ (id)momentum;
+ (id)shuffle;
+ (id)miniBatchSize;
+ (id)beta1;
+ (id)beta2;
+ (id)eps;
+ (id)epochs;
+ (id)numberOfNeighbors;
+ (id)linkedModelFileName;
+ (id)linkedModelSearchPath;
+ (id)objective;
+ (id)numTrees;
+ (id)numClasses;
+ (id)minChildWeight;
@end
