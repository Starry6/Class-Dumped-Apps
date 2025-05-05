@interface TTAPGCUserAuditInfoItem : TTADataRespModel
@property (nonatomic) NSNumber is_personal_pgc;
@property (nonatomic) NSNumber is_auditing;
@property (nonatomic) NSNumber audit_expire_time;
@property (nonatomic) TTAUserAuditInfoItem audit_info;
- (id)is_personal_pgc;
- (void)setIs_auditing:;
- (id)audit_expire_time;
- (id)audit_info;
- (id)is_auditing;
- (void)setAudit_expire_time:;
- (void)setAudit_info:;
- (void)setIs_personal_pgc:;
- (void).cxx_destruct;
@end
