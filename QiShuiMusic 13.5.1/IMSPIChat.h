@interface IMSPIChat : NSObject
@property (nonatomic) NSString guid;
@property (nonatomic) NSString chatIdentifier;
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString displayName;
@property (nonatomic) BOOL isGroup;
@property (nonatomic) NSArray handles;
@property (nonatomic) BOOL isBlackholed;
- (void)setServiceName:;
- (BOOL)isGroup;
- (id)serviceName;
- (void)setDisplayName:;
- (id)displayName;
- (void)setIsGroup:;
- (void).cxx_destruct;
- (void)setGuid:;
- (id)guid;
- (id)description;
- (id)handles;
- (void)setHandles:;
- (void)setChatIdentifier:;
- (id)chatIdentifier;
- (BOOL)isBlackholed;
- (void)enumerateAllAttachmentsWithBlock:;
- (void)enumerateAllMessagesWithBlock:;
- (id)initWithChatRecord:;
+ (void)enumerateAllChatsWithBlock:;
@end
