@interface NSPPrivacyProxyPolicy : PBCodable
@property (nonatomic) Q conditionsCount;
@property (nonatomic) ^i conditions;
- (id)conditions;
- (void)dealloc;
- (unsigned long long)conditionsCount;
- (void)writeTo:;
- (void)clearConditions;
- (int)conditionsAtIndex:;
- (unsigned long long)hash;
- (int)StringAsConditions:;
- (void)copyTo:;
- (void)mergeFrom:;
- (void)setConditions:count:;
- (id)conditionsAsString:;
- (void)addConditions:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
