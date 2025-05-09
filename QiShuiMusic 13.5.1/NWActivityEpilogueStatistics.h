@interface NWActivityEpilogueStatistics : NSObject
@property (nonatomic) {nw_activity_epilogue_report_s=Q{nw_activity_report_s=QII[16C][16C][256c]b1b7[7C]}Iiii[0C]} report;
@property (nonatomic) PBCodable awdReport;
@property (nonatomic) I awdMetricID;
@property (nonatomic) NSUUID activityUUID;
@property (nonatomic) NSUUID parentUUID;
@property (nonatomic) I domain;
@property (nonatomic) I label;
@property (nonatomic) BOOL retry;
@property (nonatomic) Q investigation_identifier;
@property (nonatomic) Q durationMsecs;
@property (nonatomic) I fragmentsQuenched;
@property (nonatomic) NSInteger completionReason;
@property (nonatomic) NSInteger underlyingErrorDomain;
@property (nonatomic) NSInteger underlyingErrorCode;
@property (nonatomic) NSUUID externallyVisibleActivityUUID;
@property (nonatomic) NSUUID externallyVisibleParentUUID;
@property (nonatomic) NWL2Report layer2Report;
@property (nonatomic) NWDeviceReport deviceReport;
@property (nonatomic) NSString bundleID;
- (void)setReport:;
- (unsigned int)label;
- (void).cxx_destruct;
- (unsigned int)domain;
- (id)bundleID;
- (id)report;
- (void)setBundleID:;
- (id)deviceReport;
- (void)setDeviceReport:;
- (id)parentUUID;
- (void)setParentUUID:;
- (id)activityUUID;
- (void)setActivityUUID:;
- (int)completionReason;
- (unsigned long long)durationMsecs;
- (unsigned int)fragmentsQuenched;
- (int)underlyingErrorDomain;
- (int)underlyingErrorCode;
- (unsigned long long)investigation_identifier;
- (id)awdReport;
- (BOOL)retry;
- (unsigned int)awdMetricID;
- (id)initWithPBCodableData:;
- (id)externallyVisibleActivityUUID;
- (void)setExternallyVisibleActivityUUID:;
- (id)externallyVisibleParentUUID;
- (void)setExternallyVisibleParentUUID:;
- (id)layer2Report;
- (void)setLayer2Report:;
- (void)setAwdReport:;
- (void)setAwdMetricID:;
- (id)initWithNWActivityEpilogueReport:length:;
+ (id)createActivityEpilogue:;
@end
