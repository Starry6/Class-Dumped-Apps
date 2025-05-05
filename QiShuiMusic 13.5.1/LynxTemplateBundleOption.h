@interface LynxTemplateBundleOption : NSObject
@property (nonatomic) NSInteger contextPoolSize;
@property (nonatomic) BOOL enableContextAutoRefill;
- (int)contextPoolSize;
- (BOOL)enableContextAutoRefill;
- (void)setContextPoolSize:;
- (void)setEnableContextAutoRefill:;
@end
