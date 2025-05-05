@interface InteractCreateCommentData_CreateCommentArgs : IESLivePBBaseMessage
@property (nonatomic) q uid;
@property (nonatomic) NSString nickName;
@property (nonatomic) NSString text;
@property (nonatomic) q roomId;
@property (nonatomic) q anchorUid;
@property (nonatomic) q entityId;
@property (nonatomic) q coverId;
@property (nonatomic) q badgeId;
+ (id)descriptor;
@end
