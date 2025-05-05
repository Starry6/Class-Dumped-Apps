@interface OTEscrowMoveRequestContext : PBCodable
@property (nonatomic) BOOL hasEscrowRecordLabel;
@property (nonatomic) NSString escrowRecordLabel;
@property (nonatomic) BOOL hasCurrentFederation;
@property (nonatomic) NSString currentFederation;
@property (nonatomic) BOOL hasIntendedFederation;
@property (nonatomic) NSString intendedFederation;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasEscrowRecordLabel;
- (BOOL)hasCurrentFederation;
- (BOOL)hasIntendedFederation;
- (id)escrowRecordLabel;
- (void)setEscrowRecordLabel:;
- (id)currentFederation;
- (void)setCurrentFederation:;
- (id)intendedFederation;
- (void)setIntendedFederation:;
@end
