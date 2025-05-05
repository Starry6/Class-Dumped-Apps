@interface OTSecureElementPeerIdentity : PBCodable
@property (nonatomic) BOOL hasPeerIdentifier;
@property (nonatomic) NSData peerIdentifier;
@property (nonatomic) BOOL hasPeerData;
@property (nonatomic) NSData peerData;
- (id)peerIdentifier;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setPeerIdentifier:;
- (id)copyWithZone:;
- (BOOL)hasPeerIdentifier;
- (BOOL)hasPeerData;
- (id)peerData;
- (void)setPeerData:;
@end
