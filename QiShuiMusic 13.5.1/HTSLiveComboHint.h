@interface HTSLiveComboHint : IESLivePBBaseMessage
@property (nonatomic) NSInteger comboHintScene;
@property (nonatomic) NSMutableArray comboHintDataArray;
@property (nonatomic) Q comboHintDataArray_Count;
+ (id)descriptor;
@end
