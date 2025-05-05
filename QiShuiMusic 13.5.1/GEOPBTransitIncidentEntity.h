@interface GEOPBTransitIncidentEntity : PBCodable
@property (nonatomic) Q muid;
@property (nonatomic) BOOL hasNextStopIDs;
@property (nonatomic) NSSet nextStopIDs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jsonRepresentation;
- (void)writeTo:;
- (unsigned long long)muid;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasNextStopIDs;
- (id)nextStopIDs;
@end
