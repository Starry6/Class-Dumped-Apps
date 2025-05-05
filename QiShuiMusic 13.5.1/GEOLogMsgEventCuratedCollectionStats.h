@interface GEOLogMsgEventCuratedCollectionStats : PBCodable
@property (nonatomic) Q savedCollectionMuidsCount;
@property (nonatomic) ^Q savedCollectionMuids;
- (void)readAll:;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)savedCollectionMuidsCount;
- (id)savedCollectionMuids;
- (void)clearSavedCollectionMuids;
- (void)addSavedCollectionMuids:;
- (unsigned long long)savedCollectionMuidsAtIndex:;
- (void)setSavedCollectionMuids:count:;
+ (BOOL)isValid:;
@end
