@interface BDUGLuckySchemaProxy : BDUGLuckyBDModel
@property (nonatomic) NSArray<BDUGLuckySchemaProxyTimeTable> timeTable;
@property (nonatomic) NSDictionary abTestTable;
@property (nonatomic) BDUGLuckySchemaProxyStatusTable statusTable;
@property (nonatomic) NSString defaultSchema;
@property (nonatomic) NSString auditingSchema;
- (void)setAbTestTable:;
- (void)setStatusTable:;
- (id)abTestTable;
- (id)auditingSchema;
- (void)setAuditingSchema:;
- (void)setDefaultSchema:;
- (void)setTimeTable:;
- (id)statusTable;
- (id)timeTable;
- (id)defaultSchema;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
