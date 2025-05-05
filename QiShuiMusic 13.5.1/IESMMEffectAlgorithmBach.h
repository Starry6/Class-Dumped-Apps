@interface IESMMEffectAlgorithmBach : NSObject
@property (nonatomic) ^v algoHandle;
- (void)addBachAlgorithmName:config:algoType:;
- (id)algoHandle;
- (id)getBachAlgorithmResultWithAlgoType:;
- (id)initWithAlgorithmHandle:;
- (int)parseBachAlgoTypeFromAlgoType:;
- (void)removeAllBachAlgorithm;
- (Class)resultClassWithAlgoType:;
- (void)setAlgoHandle:;
@end
