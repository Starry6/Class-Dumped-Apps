@interface AWEIMLifeServiceChatMenuAuditInfoModel : MTLModel
@property (nonatomic) q auditStatus;
@property (nonatomic) NSString auditMsg;
@property (nonatomic) NSString auditDetail;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)auditStatus;
- (void)setAuditStatus:;
- (id)auditMsg;
- (void)setAuditMsg:;
- (id)auditDetail;
- (void)setAuditDetail:;
- (void).cxx_destruct;
+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;
@end
