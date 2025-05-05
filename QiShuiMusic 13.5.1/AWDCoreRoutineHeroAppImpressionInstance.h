@interface AWDCoreRoutineHeroAppImpressionInstance : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasSuggestionId;
@property (nonatomic) NSString suggestionId;
@property (nonatomic) BOOL hasUiPlacement;
@property (nonatomic) NSInteger uiPlacement;
- (void)dealloc;
- (id)suggestionId;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setSuggestionId:;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasSuggestionId;
- (void)setUiPlacement:;
- (int)uiPlacement;
- (void)setHasUiPlacement:;
- (BOOL)hasUiPlacement;
@end
