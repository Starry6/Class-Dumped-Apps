@interface AWDIDSRegistrationOperation : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasGuid;
@property (nonatomic) NSString guid;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) I success;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) I connectionType;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) I resultCode;
@property (nonatomic) BOOL hasRegistrationError;
@property (nonatomic) I registrationError;
@property (nonatomic) BOOL hasGenericError;
@property (nonatomic) NSInteger genericError;
@property (nonatomic) BOOL hasURLError;
@property (nonatomic) NSInteger uRLError;
@property (nonatomic) BOOL hasPOSIXError;
@property (nonatomic) NSInteger pOSIXError;
@property (nonatomic) BOOL hasHeartbeatRegister;
@property (nonatomic) I heartbeatRegister;
@property (nonatomic) BOOL hasHeartbeatDelay;
@property (nonatomic) I heartbeatDelay;
- (void)setHasGenericError:;
- (unsigned int)connectionType;
- (BOOL)hasConnectionType;
- (void)setGenericError:;
- (BOOL)hasRegistrationError;
- (BOOL)hasGenericError;
- (void)setConnectionType:;
- (void)setHasConnectionType:;
- (void)setRegistrationError:;
- (void)setHasRegistrationError:;
- (BOOL)hasGuid;
- (unsigned int)resultCode;
- (void)dealloc;
- (unsigned int)registrationError;
- (BOOL)hasPOSIXError;
- (BOOL)hasHeartbeatRegister;
- (void)setHasResultCode:;
- (int)genericError;
- (void)setHeartbeatRegister:;
- (void)setHasPOSIXError:;
- (void)setHasHeartbeatDelay:;
- (void)setHasURLError:;
- (void)writeTo:;
- (unsigned int)heartbeatRegister;
- (unsigned int)heartbeatDelay;
- (BOOL)hasResultCode;
- (BOOL)hasHeartbeatDelay;
- (void)setHasSuccess:;
- (unsigned long long)hash;
- (void)setResultCode:;
- (unsigned int)success;
- (int)pOSIXError;
- (void)setPOSIXError:;
- (void)setSuccess:;
- (void)copyTo:;
- (int)uRLError;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (BOOL)hasTimestamp;
- (BOOL)hasURLError;
- (void)setTimestamp:;
- (void)setGuid:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)guid;
- (id)description;
- (BOOL)hasSuccess;
- (id)dictionaryRepresentation;
- (void)setHasHeartbeatRegister:;
- (void)setHeartbeatDelay:;
- (void)setURLError:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
@end
