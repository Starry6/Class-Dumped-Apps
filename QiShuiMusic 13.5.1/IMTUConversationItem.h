@interface IMTUConversationItem : IMItem
@property (nonatomic) Q flags;
@property (nonatomic) Q avMode;
@property (nonatomic) NSDictionary messageSummaryInfo;
- (BOOL)_hasMessageChatItem;
- (id)_newChatItems;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setFlags:;
- (unsigned long long)flags;
- (BOOL)isFromMe;
- (unsigned long long)avMode;
- (id)messageSummaryInfo;
- (void)setAvMode:;
- (id)copyDictionaryRepresentation;
- (id)initWithSender:time:guid:messageSummaryInfo:;
- (id)conversationUUID;
@end
