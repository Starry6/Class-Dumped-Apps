@interface IESSaaSTIMPBNSendConversationApplyRequestBody : GPBMessage
@property (nonatomic) q convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) NSMutableDictionary bizExt;
@property (nonatomic) Q bizExt_Count;
@property (nonatomic) q inviteUserId;
@property (nonatomic) BOOL hasInviteUserId;
@property (nonatomic) GPBInt64Array invitedUserIdsArray;
@property (nonatomic) Q invitedUserIdsArray_Count;
+ (id)descriptor;
@end
