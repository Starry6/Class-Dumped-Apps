@interface BXLogger : NSObject
@property (nonatomic) @? loggerDelegate;
@property (nonatomic) NSInteger logLevel;
- (id)loggerDelegate;
- (void)loggerMessage:andLevel:;
- (void)setLoggerDelegate:;
- (id)init;
- (void)setLogLevel:;
- (int)logLevel;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
