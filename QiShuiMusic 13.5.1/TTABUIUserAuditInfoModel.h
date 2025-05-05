@interface TTABUIUserAuditInfoModel : TTADataRespModel
@property (nonatomic) BOOL is_auditing;
@property (nonatomic) NSInteger audit_status;
@property (nonatomic) NSInteger last_update_time;
@property (nonatomic) NSString unpass_reason;
@property (nonatomic) TTAUserAuditInfoItem audit_info;
@property (nonatomic) NSDictionary details;
- (void)setIs_auditing:;
- (id)audit_info;
- (int)audit_status;
- (BOOL)is_auditing;
- (int)last_update_time;
- (void)setAudit_info:;
- (void)setAudit_status:;
- (void)setLast_update_time:;
- (void)setUnpass_reason:;
- (id)unpass_reason;
- (void)setDetails:;
- (void).cxx_destruct;
- (id)details;
@end
