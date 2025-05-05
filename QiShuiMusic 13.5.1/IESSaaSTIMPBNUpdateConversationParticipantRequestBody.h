@interface IESSaaSTIMPBNUpdateConversationParticipantRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) q userId;
@property (nonatomic) BOOL hasUserId;
@property (nonatomic) NSInteger role;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) NSString alias;
@property (nonatomic) BOOL hasAlias;
@property (nonatomic) BOOL isAliasSet;
@property (nonatomic) BOOL hasIsAliasSet;
@property (nonatomic) NSMutableDictionary bizExt;
@property (nonatomic) Q bizExt_Count;
+ (id)descriptor;
@end
