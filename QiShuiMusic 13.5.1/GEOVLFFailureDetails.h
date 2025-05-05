@interface GEOVLFFailureDetails : PBCodable
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) NSInteger failureReason;
- (void)readAll:;
- (int)failureReason;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setFailureReason:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setHasFailureReason:;
- (BOOL)hasFailureReason;
- (id)failureReasonAsString:;
- (int)StringAsFailureReason:;
+ (BOOL)isValid:;
@end
