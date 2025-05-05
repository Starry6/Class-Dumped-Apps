@interface CPLServerFeedbackRequest : PBRequest
@property (nonatomic) NSMutableArray messages;
- (id)messages;
- (void)writeTo:;
- (void)addMessages:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMessages:;
- (void)clearMessages;
- (unsigned long long)messagesCount;
- (id)messagesAtIndex:;
@end
