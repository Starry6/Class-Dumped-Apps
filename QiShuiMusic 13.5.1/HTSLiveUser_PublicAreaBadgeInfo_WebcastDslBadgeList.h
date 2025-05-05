@interface HTSLiveUser_PublicAreaBadgeInfo_WebcastDslBadgeList : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array badgeListArray;
@property (nonatomic) Q badgeListArray_Count;
@property (nonatomic) HTSLiveUser_PublicAreaBadgeInfo_WebcastDslBadgeList_DslRule targetDslRule;
@property (nonatomic) BOOL hasTargetDslRule;
@property (nonatomic) HTSLiveUser_PublicAreaBadgeInfo_WebcastDslBadgeList_DslRule filterDslRule;
@property (nonatomic) BOOL hasFilterDslRule;
+ (id)descriptor;
@end
