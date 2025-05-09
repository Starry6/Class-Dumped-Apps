@interface GEORPContainmentCorrection : PBCodable
@property (nonatomic) Q addedMuidsCount;
@property (nonatomic) ^Q addedMuids;
@property (nonatomic) Q removedMuidsCount;
@property (nonatomic) ^Q removedMuids;
@property (nonatomic) Q originalMuidsCount;
@property (nonatomic) ^Q originalMuids;
@property (nonatomic) PBUnknownFields unknownFields;
- (void)readAll:;
- (id)unknownFields;
- (id)init;
- (void)dealloc;
- (id)initWithJSON:;
- (id)jsonRepresentation;
- (id)initWithDictionary:;
- (void)clearUnknownFields:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)initWithData:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)addedMuidsCount;
- (id)addedMuids;
- (void)clearAddedMuids;
- (void)addAddedMuid:;
- (unsigned long long)addedMuidAtIndex:;
- (void)setAddedMuids:count:;
- (unsigned long long)removedMuidsCount;
- (id)removedMuids;
- (void)clearRemovedMuids;
- (void)addRemovedMuid:;
- (unsigned long long)removedMuidAtIndex:;
- (void)setRemovedMuids:count:;
- (unsigned long long)originalMuidsCount;
- (id)originalMuids;
- (void)clearOriginalMuids;
- (void)addOriginalMuid:;
- (unsigned long long)originalMuidAtIndex:;
- (void)setOriginalMuids:count:;
+ (BOOL)isValid:;
@end
