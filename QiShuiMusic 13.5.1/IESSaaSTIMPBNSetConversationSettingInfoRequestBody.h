@interface IESSaaSTIMPBNSetConversationSettingInfoRequestBody : GPBMessage
@property (nonatomic) NSString conversationId;
@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) q conversationShortId;
@property (nonatomic) BOOL hasConversationShortId;
@property (nonatomic) NSInteger conversationType;
@property (nonatomic) BOOL hasConversationType;
@property (nonatomic) BOOL setStickOnTop;
@property (nonatomic) BOOL hasSetStickOnTop;
@property (nonatomic) BOOL setMute;
@property (nonatomic) BOOL hasSetMute;
@property (nonatomic) BOOL setFavorite;
@property (nonatomic) BOOL hasSetFavorite;
+ (id)descriptor;
@end
