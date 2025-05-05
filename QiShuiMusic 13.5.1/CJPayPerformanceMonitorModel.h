@interface CJPayPerformanceMonitorModel : JSONModel
@property (nonatomic) NSArray<CJPayPerformanceUploadRule> uploadRules;
- (void)setUploadRules:;
- (id)uploadRules;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
