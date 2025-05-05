@interface NWPBStartBrowse : PBCodable
@property (nonatomic) BOOL hasDescriptor;
@property (nonatomic) NWPBBrowseDescriptor descriptor;
@property (nonatomic) BOOL hasParameters;
@property (nonatomic) NWPBParameters parameters;
@property (nonatomic) BOOL hasClientUUID;
@property (nonatomic) NSString clientUUID;
- (id)descriptor;
- (void)setDescriptor:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (id)parameters;
- (void)setClientUUID:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (void)setParameters:;
- (id)dictionaryRepresentation;
- (id)clientUUID;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)hasClientUUID;
- (BOOL)hasParameters;
- (BOOL)hasDescriptor;
@end
