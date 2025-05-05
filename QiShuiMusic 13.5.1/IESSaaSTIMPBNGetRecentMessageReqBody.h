@interface IESSaaSTIMPBNGetRecentMessageReqBody : GPBMessage
@property (nonatomic) q conversationVersion;
@property (nonatomic) BOOL hasConversationVersion;
@property (nonatomic) NSString source;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) NSInteger newUser;
@property (nonatomic) BOOL hasNewUser;
@property (nonatomic) NSMutableDictionary ext;
@property (nonatomic) Q ext_Count;
+ (id)descriptor;
@end
