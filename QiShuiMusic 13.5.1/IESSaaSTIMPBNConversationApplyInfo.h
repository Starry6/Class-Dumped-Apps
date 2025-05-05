@interface IESSaaSTIMPBNConversationApplyInfo : GPBMessage
@property (nonatomic) q userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) q convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSInteger applyStatus;
@property (nonatomic) BOOL hasApplyStatus;
@property (nonatomic) q applyId;
@property (nonatomic) BOOL hasApplyId;
@property (nonatomic) q createTime;
@property (nonatomic) BOOL hasCreateTime;
@property (nonatomic) q modifyTime;
@property (nonatomic) BOOL hasModifyTime;
@property (nonatomic) q modifyUser;
@property (nonatomic) BOOL hasModifyUser;
@property (nonatomic) NSString secUid;
@property (nonatomic) BOOL hasSecUid;
@property (nonatomic) q inviteUserId;
@property (nonatomic) BOOL hasInviteUserId;
@property (nonatomic) NSString secInviteUid;
@property (nonatomic) BOOL hasSecInviteUid;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
