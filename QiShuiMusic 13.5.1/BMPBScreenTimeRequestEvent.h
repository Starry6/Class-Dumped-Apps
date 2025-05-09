@interface BMPBScreenTimeRequestEvent : PBCodable
@property (nonatomic) BOOL hasRequestID;
@property (nonatomic) NSString requestID;
@property (nonatomic) BOOL hasEventTime;
@property (nonatomic) double eventTime;
@property (nonatomic) BOOL hasRequesterDSID;
@property (nonatomic) NSString requesterDSID;
@property (nonatomic) BOOL hasResponderDSID;
@property (nonatomic) NSString responderDSID;
@property (nonatomic) BOOL hasKind;
@property (nonatomic) NSInteger kind;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL hasApprovalTime;
@property (nonatomic) NSInteger approvalTime;
@property (nonatomic) BOOL hasWebsitePath;
@property (nonatomic) NSString websitePath;
@property (nonatomic) BOOL hasBundleID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) BOOL hasIsActionUserDevice;
@property (nonatomic) BOOL isActionUserDevice;
- (BOOL)hasRequestID;
- (void)setStatus:;
- (void)setKind:;
- (void)setEventTime:;
- (BOOL)hasStatus;
- (id)kindAsString:;
- (BOOL)hasEventTime;
- (BOOL)hasBundleID;
- (id)statusAsString:;
- (void)writeTo:;
- (int)kind;
- (double)eventTime;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasStatus:;
- (void)mergeFrom:;
- (void)setHasKind:;
- (id)requestID;
- (BOOL)hasKind;
- (void).cxx_destruct;
- (BOOL)readFrom:;
- (id)description;
- (int)status;
- (id)dictionaryRepresentation;
- (int)StringAsKind:;
- (id)bundleID;
- (BOOL)isEqual:;
- (void)setRequestID:;
- (int)StringAsStatus:;
- (id)copyWithZone:;
- (void)setBundleID:;
- (void)setHasEventTime:;
- (void)setIsActionUserDevice:;
- (void)setHasIsActionUserDevice:;
- (BOOL)hasIsActionUserDevice;
- (BOOL)isActionUserDevice;
- (BOOL)hasRequesterDSID;
- (BOOL)hasResponderDSID;
- (int)approvalTime;
- (void)setApprovalTime:;
- (void)setHasApprovalTime:;
- (BOOL)hasApprovalTime;
- (id)approvalTimeAsString:;
- (int)StringAsApprovalTime:;
- (BOOL)hasWebsitePath;
- (id)requesterDSID;
- (void)setRequesterDSID:;
- (id)responderDSID;
- (void)setResponderDSID:;
- (id)websitePath;
- (void)setWebsitePath:;
@end
