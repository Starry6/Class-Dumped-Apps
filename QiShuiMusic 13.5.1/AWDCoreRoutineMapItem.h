@interface AWDCoreRoutineMapItem : PBCodable
@property (nonatomic) Q mapItemSourcesCount;
@property (nonatomic) ^i mapItemSources;
@property (nonatomic) BOOL hasHasMuid;
@property (nonatomic) BOOL hasMuid;
- (void)setHasMuid:;
- (BOOL)hasMuid;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)addMapItemSources:;
- (unsigned long long)mapItemSourcesCount;
- (id)mapItemSources;
- (void)clearMapItemSources;
- (int)mapItemSourcesAtIndex:;
- (void)setMapItemSources:count:;
- (id)mapItemSourcesAsString:;
- (int)StringAsMapItemSources:;
- (void)setHasHasMuid:;
- (BOOL)hasHasMuid;
@end
