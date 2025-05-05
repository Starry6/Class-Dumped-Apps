@interface HTSLiveToolbarItemBehaviourParams : IESLivePBBaseMessage
@property (nonatomic) NSString key;
@property (nonatomic) NSMutableArray paramsArray;
@property (nonatomic) Q paramsArray_Count;
+ (id)descriptor;
@end
