@interface AWDSafariAutoFillAuthenticationPreferenceEvent : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasRequiresAuthentication;
@property (nonatomic) BOOL requiresAuthentication;
- (void)writeTo:;
- (void)setRequiresAuthentication:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (BOOL)hasRequiresAuthentication;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setHasRequiresAuthentication:;
- (BOOL)requiresAuthentication;
- (id)copyWithZone:;
@end
