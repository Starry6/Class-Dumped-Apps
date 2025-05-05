@interface AnchorFansInfo : IESLivePBBaseMessage
@property (nonatomic) q onlineFansCount;
@property (nonatomic) q onlineFriendCount;
@property (nonatomic) q livingFriendCount;
@property (nonatomic) q avatarType;
@property (nonatomic) NSMutableArray avatarsArray;
@property (nonatomic) Q avatarsArray_Count;
@property (nonatomic) GPBInt64Array avatarPickReasonArray;
@property (nonatomic) Q avatarPickReasonArray_Count;
+ (id)descriptor;
@end
