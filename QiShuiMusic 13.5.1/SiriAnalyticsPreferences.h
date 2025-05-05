@interface SiriAnalyticsPreferences : NSObject
@property (nonatomic) NSData preprocessorBookmark;
@property (nonatomic) Q unifiedStreamMaxSize;
@property (nonatomic) Q unifiedStreamMaxSizeOrDefault;
@property (nonatomic) double unifiedStreamMaxAge;
@property (nonatomic) double unifiedStreamMaxAgeOrDefault;
- (unsigned long long)unifiedStreamMaxSizeOrDefault;
- (id)init;
- (double)unifiedStreamMaxAge;
- (unsigned long long)unifiedStreamMaxSize;
- (id)initWithPreferencesDomain:;
- (void)synchronize;
- (void)setUnifiedStreamMaxAge:;
- (double)unifiedStreamMaxAgeOrDefault;
- (void)setPreprocessorBookmark:;
- (void)setUnifiedStreamMaxSize:;
- (BOOL)tailMessagesToOSLogEnabled;
- (id)preprocessorBookmark;
- (void)setUnifiedStreamMaxAgeOrDefault:;
@end
