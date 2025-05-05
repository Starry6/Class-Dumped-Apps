@interface HTSLivePkActivePush_Matcher : IESLivePBBaseMessage
@property (nonatomic) NSString openUserId;
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) BOOL hasRoom;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
+ (id)descriptor;
@end
