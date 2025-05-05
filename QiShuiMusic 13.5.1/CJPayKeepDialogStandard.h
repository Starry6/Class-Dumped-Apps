@interface CJPayKeepDialogStandard : JSONModel
@property (nonatomic) NSString scheme;
@property (nonatomic) q fallbackWaitTimeMillis;
- (long long)fallbackWaitTimeMillis;
- (void)setFallbackWaitTimeMillis:;
- (void)setScheme:;
- (id)scheme;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
