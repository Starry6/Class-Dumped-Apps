@interface HTSLiveRoomShortTouchAreaConfig : IESLivePBBaseMessage
@property (nonatomic) GPBInt32ObjectDictionary elements;
@property (nonatomic) Q elements_Count;
@property (nonatomic) GPBInt32ObjectDictionary forbiddenTypesMap;
@property (nonatomic) Q forbiddenTypesMap_Count;
@property (nonatomic) GPBInt32ObjectDictionary tempStateConditionMap;
@property (nonatomic) Q tempStateConditionMap_Count;
@property (nonatomic) GPBInt32ObjectDictionary tempStateStrategy;
@property (nonatomic) Q tempStateStrategy_Count;
+ (id)descriptor;
@end
