@interface TTAccountBUIUserAuditEntity : TTAccountBaseEntity
@property (nonatomic) BOOL isAuditing;
@property (nonatomic) NSString unpassReason;
@property (nonatomic) NSNumber auditStatus;
@property (nonatomic) NSNumber lastUpdateTime;
@property (nonatomic) TTAccountUserAuditEntity auditInfo;
@property (nonatomic) NSDictionary details;
- (void)setAuditStatus:;
- (id)auditInfo;
- (id)auditStatus;
- (BOOL)isAuditing;
- (void)setAuditInfo:;
- (void)setIsAuditing:;
- (void)setUnpassReason:;
- (id)unpassReason;
- (void)setDetails:;
- (id)lastUpdateTime;
- (id)initWithModel:;
- (void).cxx_destruct;
- (id)details;
- (void)setLastUpdateTime:;
+ (unsigned long long)modelCustomMappingOptions;
@end
