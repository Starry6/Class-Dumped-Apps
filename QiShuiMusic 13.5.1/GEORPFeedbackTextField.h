@interface GEORPFeedbackTextField : PBCodable
@property (nonatomic) BOOL hasOriginal;
@property (nonatomic) NSString original;
@property (nonatomic) BOOL hasEdited;
@property (nonatomic) NSString edited;
- (void)readAll:;
- (id)init;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setEdited:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)original;
- (id)dictionaryRepresentation;
- (id)edited;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasEdited;
- (BOOL)hasOriginal;
- (void)setOriginal:;
+ (BOOL)isValid:;
@end
