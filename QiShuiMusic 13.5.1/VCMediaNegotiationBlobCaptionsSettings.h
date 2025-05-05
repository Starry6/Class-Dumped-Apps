@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable
@property (nonatomic) BOOL hasCanDisplayCaptions;
@property (nonatomic) BOOL canDisplayCaptions;
@property (nonatomic) BOOL hasSenderLanguages;
@property (nonatomic) I senderLanguages;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setCanDisplayCaptions:;
- (void)setHasCanDisplayCaptions:;
- (BOOL)hasCanDisplayCaptions;
- (void)setSenderLanguages:;
- (void)setHasSenderLanguages:;
- (BOOL)hasSenderLanguages;
- (BOOL)canDisplayCaptions;
- (unsigned int)senderLanguages;
@end
