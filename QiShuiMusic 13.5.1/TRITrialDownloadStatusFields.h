@interface TRITrialDownloadStatusFields : PBCodable
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSInteger status;
- (void)setStatus:;
- (BOOL)hasStatus;
- (id)statusAsString:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (int)StringAsStatus:;
- (id)copyWithZone:;
@end
