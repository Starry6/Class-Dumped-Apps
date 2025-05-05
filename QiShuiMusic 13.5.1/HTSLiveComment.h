@interface HTSLiveComment : IESLivePBBaseMessage
@property (nonatomic) q commentId;
@property (nonatomic) HTSLiveComment_User commentUser;
@property (nonatomic) BOOL hasCommentUser;
@property (nonatomic) NSString text;
@property (nonatomic) NSInteger tag;
@property (nonatomic) BOOL public_p;
@property (nonatomic) q createTimestamp;
@property (nonatomic) NSInteger thumbupNumber;
@property (nonatomic) NSMutableArray childrenCommentArray;
@property (nonatomic) Q childrenCommentArray_Count;
@property (nonatomic) NSInteger audit;
@property (nonatomic) BOOL firstReply;
@property (nonatomic) HTSLiveComment_DressInfo dressInfo;
@property (nonatomic) BOOL hasDressInfo;
+ (id)descriptor;
@end
