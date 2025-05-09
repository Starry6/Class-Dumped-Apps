@interface ASRSchemaASRSampledAudioFileStorageFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger errorCode;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) NSString errorDomain;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) NSInteger underlyingErrorCode;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) NSString underlyingErrorDomain;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) NSInteger sampledAudioStorageFailureReason;
@property (nonatomic) BOOL hasSampledAudioStorageFailureReason;
@property (nonatomic) NSData jsonData;
- (id)errorDomain;
- (BOOL)hasErrorCode;
- (int)errorCode;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:;
- (void)writeTo:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setErrorDomain:;
- (BOOL)hasErrorDomain;
- (void)setHasErrorCode:;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setUnderlyingErrorDomain:;
- (void)setHasUnderlyingErrorDomain:;
- (BOOL)hasUnderlyingErrorDomain;
- (void)setUnderlyingErrorCode:;
- (void)setHasUnderlyingErrorCode:;
- (BOOL)hasUnderlyingErrorCode;
- (id)underlyingErrorDomain;
- (int)underlyingErrorCode;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteUnderlyingErrorCode;
- (void)deleteUnderlyingErrorDomain;
- (void)setHasErrorDomain:;
- (void)setSampledAudioStorageFailureReason:;
- (BOOL)hasSampledAudioStorageFailureReason;
- (void)setHasSampledAudioStorageFailureReason:;
- (void)deleteSampledAudioStorageFailureReason;
- (int)sampledAudioStorageFailureReason;
@end
