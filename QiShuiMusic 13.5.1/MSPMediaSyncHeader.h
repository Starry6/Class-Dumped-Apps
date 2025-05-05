@interface MSPMediaSyncHeader : PBCodable
@property (nonatomic) BOOL hasTotalPackages;
@property (nonatomic) NSInteger totalPackages;
@property (nonatomic) BOOL hasSyncType;
@property (nonatomic) NSInteger syncType;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)syncType;
- (void)setSyncType:;
- (void)setTotalPackages:;
- (void)setHasTotalPackages:;
- (BOOL)hasTotalPackages;
- (void)setHasSyncType:;
- (BOOL)hasSyncType;
- (id)syncTypeAsString:;
- (int)StringAsSyncType:;
- (int)totalPackages;
@end
