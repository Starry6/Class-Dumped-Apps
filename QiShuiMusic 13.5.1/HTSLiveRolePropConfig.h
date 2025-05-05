@interface HTSLiveRolePropConfig : IESLivePBBaseMessage
@property (nonatomic) GPBEnumArray playTypeArray;
@property (nonatomic) Q playTypeArray_Count;
@property (nonatomic) GPBInt64Array topicArray;
@property (nonatomic) Q topicArray_Count;
@property (nonatomic) GPBEnumArray effectScenesArray;
@property (nonatomic) Q effectScenesArray_Count;
@property (nonatomic) BOOL globalValid;
@property (nonatomic) q allowListId;
@property (nonatomic) GPBInt64ObjectDictionary playerProp;
@property (nonatomic) Q playerProp_Count;
@property (nonatomic) GPBInt64ObjectDictionary teamPlayerProp;
@property (nonatomic) Q teamPlayerProp_Count;
+ (id)descriptor;
@end
