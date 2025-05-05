@interface WBSAnalyticsSafariInteractedWithGeneratedPasswordEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasGeneratedPasswordInteractionType;
@property (nonatomic) NSInteger generatedPasswordInteractionType;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)generatedPasswordInteractionType;
- (void)setGeneratedPasswordInteractionType:;
- (void)setHasGeneratedPasswordInteractionType:;
- (BOOL)hasGeneratedPasswordInteractionType;
- (id)generatedPasswordInteractionTypeAsString:;
- (int)StringAsGeneratedPasswordInteractionType:;
@end
