@interface IDSServerMessagingMessage : IDSMessage
@property (nonatomic) NSData messageData;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString messageID;
- (id)messageID;
- (void)setExpirationDate:;
- (id)messageBody;
- (id)expirationDate;
- (long long)command;
- (void).cxx_destruct;
- (void)setMessageID:;
- (id)copyWithZone:;
- (id)messageData;
- (void)setMessageData:;
- (BOOL)wantsResponse;
@end
