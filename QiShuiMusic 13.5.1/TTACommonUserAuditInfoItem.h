@interface TTACommonUserAuditInfoItem : TTADataRespModel
@property (nonatomic) NSNumber is_auditing;
@property (nonatomic) NSNumber audit_type;
@property (nonatomic) NSNumber is_personal_pgc;
@property (nonatomic) TTAUserAuditInfoItem audit_info;
- (id)is_personal_pgc;
- (void)setIs_auditing:;
- (id)audit_info;
- (id)audit_type;
- (id)is_auditing;
- (void)setAudit_info:;
- (void)setAudit_type:;
- (void)setIs_personal_pgc:;
- (void).cxx_destruct;
@end
