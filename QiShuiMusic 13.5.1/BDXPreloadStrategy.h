@interface BDXPreloadStrategy : NSObject
@property (nonatomic) q priority;
@property (nonatomic) q strategyType;
@property (nonatomic) BOOL enableTemplateMemCache;
@property (nonatomic) BOOL disablePreloadTemplate;
@property (nonatomic) BOOL onlyPreloadTemplate;
- (BOOL)disablePreloadTemplate;
- (BOOL)enableTemplateMemCache;
- (BOOL)onlyPreloadTemplate;
- (void)setDisablePreloadTemplate:;
- (void)setEnableTemplateMemCache:;
- (void)setOnlyPreloadTemplate:;
- (void)setStrategyType:;
- (long long)strategyType;
- (id)init;
- (void)setPriority:;
- (long long)priority;
+ (id)strategy:;
+ (id)strategy:priority:;
@end
