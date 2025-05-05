@interface TTAccountCommonMediaUserAuditEntity : TTAccountUserAuditEntity
@property (nonatomic) BOOL auditing;
@property (nonatomic) NSNumber auditType;
@property (nonatomic) BOOL isPersonalPGC;
- (id)auditType;
- (BOOL)auditing;
- (id)initWithMediaAuditModel:;
- (BOOL)isPersonalPGC;
- (void)setAuditType:;
- (void)setAuditing:;
- (void)setIsPersonalPGC:;
- (id)initWithDictionary:;
- (void).cxx_destruct;
@end
