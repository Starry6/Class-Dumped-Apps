@interface AWDLibnetcoreTCPConnectionReport : PBCodable
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) Q timestamp;
@property (nonatomic) BOOL hasClientIdentifier;
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) BOOL hasDelegated;
@property (nonatomic) BOOL delegated;
@property (nonatomic) BOOL hasReportReason;
@property (nonatomic) NSInteger reportReason;
@property (nonatomic) BOOL hasConnectionStatisticsReport;
@property (nonatomic) AWDLibnetcoreConnectionStatisticsReport connectionStatisticsReport;
@property (nonatomic) BOOL hasCellularFallbackReport;
@property (nonatomic) AWDLibnetcoreCellularFallbackReport cellularFallbackReport;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) Q iPAddressAttemptCount;
@property (nonatomic) NSMutableArray connectionAttemptStatisticsReports;
@property (nonatomic) BOOL hasSourceAppIdentifier;
@property (nonatomic) NSString sourceAppIdentifier;
- (BOOL)hasReportReason;
- (void)dealloc;
- (void)setHasReportReason:;
- (void)writeTo:;
- (unsigned long long)hash;
- (void)copyTo:;
- (void)setHasTimestamp:;
- (void)mergeFrom:;
- (int)reportReason;
- (BOOL)hasTimestamp;
- (void)setTimestamp:;
- (void)setClientIdentifier:;
- (BOOL)readFrom:;
- (unsigned long long)timestamp;
- (id)description;
- (BOOL)hasClientIdentifier;
- (id)dictionaryRepresentation;
- (id)clientIdentifier;
- (void)setDelegated:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setReportReason:;
- (id)sourceAppIdentifier;
- (void)setIPAddressAttemptCount:;
- (void)setHasIPAddressAttemptCount:;
- (BOOL)hasIPAddressAttemptCount;
- (unsigned long long)iPAddressAttemptCount;
- (BOOL)delegated;
- (void)setHasDelegated:;
- (BOOL)hasDelegated;
- (id)reportReasonAsString:;
- (int)StringAsReportReason:;
- (BOOL)hasConnectionStatisticsReport;
- (BOOL)hasCellularFallbackReport;
- (void)clearConnectionAttemptStatisticsReports;
- (void)addConnectionAttemptStatisticsReports:;
- (unsigned long long)connectionAttemptStatisticsReportsCount;
- (id)connectionAttemptStatisticsReportsAtIndex:;
- (BOOL)hasSourceAppIdentifier;
- (id)connectionStatisticsReport;
- (void)setConnectionStatisticsReport:;
- (id)cellularFallbackReport;
- (void)setCellularFallbackReport:;
- (id)connectionAttemptStatisticsReports;
- (void)setConnectionAttemptStatisticsReports:;
- (void)setSourceAppIdentifier:;
+ (Class)connectionAttemptStatisticsReportsType;
@end
