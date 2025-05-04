@interface AWEReportTypeModel : AWEBaseApiModel
@property (nonatomic) NSNumber reasonType;
@property (nonatomic) NSString desc;
@property (nonatomic) NSNumber auditType;
- (id)auditType;
- (void)setAuditType:;
- (void)setReasonType:;
- (id)reasonType;
- (void)setDesc:;
- (id)desc;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
