@interface HTSLiveUser_PublicAreaBadgeInfo : IESLivePBBaseMessage
@property (nonatomic) GPBInt64ObjectDictionary badgeInfoMap;
@property (nonatomic) Q badgeInfoMap_Count;
@property (nonatomic) GPBInt64Array badgeListArray;
@property (nonatomic) Q badgeListArray_Count;
@property (nonatomic) NSMutableArray webcastDslBadgeListArray;
@property (nonatomic) Q webcastDslBadgeListArray_Count;
+ (id)descriptor;
@end
