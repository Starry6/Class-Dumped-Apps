@interface AWDMailMessageBody : PBCodable
@property (nonatomic) BOOL hasMimeType;
@property (nonatomic) NSString mimeType;
@property (nonatomic) BOOL hasMimeSubtype;
@property (nonatomic) NSString mimeSubtype;
@property (nonatomic) BOOL hasTotalTextSize;
@property (nonatomic) Q totalTextSize;
- (void)writeTo:;
- (unsigned long long)hash;
- (BOOL)hasMimeType;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)mimeType;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (void)setMimeType:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)totalTextSize;
- (id)mimeSubtype;
- (id)initWithMIMEBody:;
- (BOOL)hasMimeSubtype;
- (void)setTotalTextSize:;
- (void)setHasTotalTextSize:;
- (BOOL)hasTotalTextSize;
- (void)setMimeSubtype:;
@end
