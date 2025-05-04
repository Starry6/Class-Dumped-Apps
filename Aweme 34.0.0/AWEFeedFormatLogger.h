@interface AWEFeedFormatLogger : NSObject
@property (nonatomic) BOOL enableFormatLogger;
@property (nonatomic) BOOL enableFormatLoggerInstance;
@property (nonatomic) BOOL enableDowngrade;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logWithLevel:subModuleName:linkIDs:eventType:where:what:who:extra:;
- (BOOL)enableFormatLogger;
- (BOOL)enableFormatLoggerInstance;
- (void)logWithLevel:subModuleName:where:what:extra:;
- (void)setEnableFormatLogger:;
- (void)setEnableFormatLoggerInstance:;
- (BOOL)enableDowngrade;
- (void)setEnableDowngrade:;
+ (void)logWithLevel:subModuleName:linkIDs:eventType:where:what:who:extra:;
+ (void)logWithLevel:subModuleName:where:what:extra:;
+ (id)sharedInstance;
@end
