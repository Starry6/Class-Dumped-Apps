@interface AWDIDSRegistrationPhoneNumberReceivedSMS : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasGuid;
@property (nonatomic) NSString guid;
@property (nonatomic) BOOL hasSmsRoundTripDuration;
@property (nonatomic) I smsRoundTripDuration;
- (BOOL)hasGuid;
- (void)dealloc;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setGuid:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)guid;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)smsRoundTripDuration;
- (void)setSmsRoundTripDuration:;
- (void)setHasSmsRoundTripDuration:;
- (BOOL)hasSmsRoundTripDuration;
@end
