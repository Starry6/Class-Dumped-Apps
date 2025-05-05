@interface SECSFAActionDropEvent : PBCodable
@property (nonatomic) BOOL hasExcludeEvent;
@property (nonatomic) BOOL excludeEvent;
@property (nonatomic) BOOL hasExcludeCount;
@property (nonatomic) BOOL excludeCount;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setExcludeEvent:;
- (void)setHasExcludeEvent:;
- (BOOL)hasExcludeEvent;
- (void)setExcludeCount:;
- (void)setHasExcludeCount:;
- (BOOL)hasExcludeCount;
- (BOOL)excludeEvent;
- (BOOL)excludeCount;
@end
