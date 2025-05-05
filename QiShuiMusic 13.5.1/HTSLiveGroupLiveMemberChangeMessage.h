@interface HTSLiveGroupLiveMemberChangeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray membersArray;
@property (nonatomic) Q membersArray_Count;
+ (id)descriptor;
@end
