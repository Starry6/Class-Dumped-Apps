@interface AWEDCFeedFormatLogger : NSObject
@property (nonatomic) BOOL enableFormatLogger;
@property (nonatomic) BOOL enableFormatLoggerInstance;
@property (nonatomic) BOOL useDefaultLogWhenDowngrade;
- (BOOL)enableFormatLogger;
- (BOOL)enableFormatLoggerInstance;
- (BOOL)useDefaultLogWhenDowngrade;
- (void)setEnableFormatLogger:;
- (void)setEnableFormatLoggerInstance:;
- (void)setUseDefaultLogWhenDowngrade:;
+ (void)logWithLevel:subModuleName:linkIDs:eventType:where:what:who:extra:;
+ (void)logWithLevel:subModuleName:where:what:extra:;
+ (id)sharedInstance;
@end
