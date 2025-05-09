@interface NETSchemaNETSessionConnectionFailed : SISchemaInstrumentationMessage
@property (nonatomic) NSInteger connectionType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) NSInteger connectionMode;
@property (nonatomic) BOOL hasConnectionMode;
@property (nonatomic) NSInteger sessionType;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) NSInteger networkSessionState;
@property (nonatomic) BOOL hasNetworkSessionState;
@property (nonatomic) BOOL isWwanPreferred;
@property (nonatomic) BOOL hasIsWwanPreferred;
@property (nonatomic) BOOL isDormant;
@property (nonatomic) BOOL hasIsDormant;
@property (nonatomic) Q sendBufferSize;
@property (nonatomic) BOOL hasSendBufferSize;
@property (nonatomic) NSString policyId;
@property (nonatomic) BOOL hasPolicyId;
@property (nonatomic) NETSchemaNETError error;
@property (nonatomic) BOOL hasError;
@property (nonatomic) NETSchemaNETError underlyingError;
@property (nonatomic) BOOL hasUnderlyingError;
@property (nonatomic) NSData jsonData;
- (int)connectionType;
- (BOOL)hasConnectionType;
- (void)setConnectionType:;
- (int)sessionType;
- (void)setHasConnectionType:;
- (BOOL)hasSessionType;
- (BOOL)hasError;
- (unsigned long long)sendBufferSize;
- (void)setHasSessionType:;
- (id)initWithJSON:;
- (id)suppressMessageUnderConditions;
- (void)setError:;
- (void)setHasError:;
- (id)initWithDictionary:;
- (void)writeTo:;
- (void)setPolicyId:;
- (id)error;
- (id)jsonData;
- (unsigned long long)hash;
- (int)connectionMode;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:;
- (BOOL)readFrom:;
- (void)setConnectionMode:;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (void)setSessionType:;
- (id)policyId;
- (void)setHasConnectionMode:;
- (BOOL)hasConnectionMode;
- (void)setUnderlyingError:;
- (id)underlyingError;
- (void)deleteError;
- (void)deleteConnectionType;
- (void)deleteConnectionMode;
- (void)deleteSessionType;
- (void)setNetworkSessionState:;
- (BOOL)hasNetworkSessionState;
- (void)setHasNetworkSessionState:;
- (void)deleteNetworkSessionState;
- (void)setIsWwanPreferred:;
- (BOOL)hasIsWwanPreferred;
- (void)setHasIsWwanPreferred:;
- (void)deleteIsWwanPreferred;
- (void)setIsDormant:;
- (BOOL)hasIsDormant;
- (void)setHasIsDormant:;
- (void)deleteIsDormant;
- (void)setSendBufferSize:;
- (BOOL)hasSendBufferSize;
- (void)setHasSendBufferSize:;
- (void)deleteSendBufferSize;
- (BOOL)hasPolicyId;
- (void)deletePolicyId;
- (BOOL)hasUnderlyingError;
- (void)deleteUnderlyingError;
- (int)networkSessionState;
- (BOOL)isWwanPreferred;
- (BOOL)isDormant;
- (void)setHasPolicyId:;
- (void)setHasUnderlyingError:;
@end
