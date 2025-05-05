@interface AWDMailMessage : PBCodable
@property (nonatomic) BOOL hasMessageId;
@property (nonatomic) NSString messageId;
@property (nonatomic) BOOL hasBody;
@property (nonatomic) AWDMailMessageBody body;
- (id)messageId;
- (id)body;
- (void)writeTo:;
- (BOOL)hasBody;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setBody:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMessageId:;
- (id)initWithMailMessage:;
- (BOOL)hasMessageId;
@end
