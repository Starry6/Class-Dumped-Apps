@interface AWEIMFTSSyncMessageData : NSObject
@property (nonatomic) q optionType;
@property (nonatomic) NSArray saveMsgIds;
@property (nonatomic) NSArray deletedMsgIds;
@property (nonatomic) NSArray deletedByConvIds;
@property (nonatomic) NSDictionary conversationMap;
- (void)setOptionType:;
- (void)setSaveMsgIds:;
- (void)setConversationMap:;
- (void)setDeletedMsgIds:;
- (void)setDeletedByConvIds:;
- (id)saveMsgIds;
- (id)conversationMap;
- (id)deletedMsgIds;
- (id)deletedByConvIds;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (long long)optionType;
@end
