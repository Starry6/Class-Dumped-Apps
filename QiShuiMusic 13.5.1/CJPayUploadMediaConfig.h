@interface CJPayUploadMediaConfig : JSONModel
@property (nonatomic) q defaultMaxSize;
@property (nonatomic) q defaultMaxResolution;
- (long long)defaultMaxResolution;
- (long long)defaultMaxSize;
- (void)setDefaultMaxResolution:;
- (void)setDefaultMaxSize:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
