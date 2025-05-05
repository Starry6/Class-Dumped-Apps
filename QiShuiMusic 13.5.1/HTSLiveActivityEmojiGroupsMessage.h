@interface HTSLiveActivityEmojiGroupsMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSMutableArray activityEmojiGroupsArray;
@property (nonatomic) Q activityEmojiGroupsArray_Count;
+ (id)descriptor;
@end
