@interface AWEReportTypeModel : IESIMBaseApiModel
@property (nonatomic) NSNumber reasonType;
@property (nonatomic) NSString desc;
@property (nonatomic) NSNumber auditType;
- (id)auditType;
- (void)setAuditType:;
- (void)setReasonType:;
- (id)desc;
- (id)reasonType;
- (void)setDesc:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
