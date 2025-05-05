@interface HTSLiveCardTriggerConfig : IESLivePBBaseMessage
@property (nonatomic) I strategy;
@property (nonatomic) NSMutableArray commonTriggerListArray;
@property (nonatomic) Q commonTriggerListArray_Count;
@property (nonatomic) NSMutableDictionary customTriggerMap;
@property (nonatomic) Q customTriggerMap_Count;
+ (id)descriptor;
@end
