@interface HTSLiveStrategyFeatureInfo : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray featureDataArray;
@property (nonatomic) Q featureDataArray_Count;
- (id)dictionaryWtihFeatureInfo;
+ (id)descriptor;
@end
