@interface DIRSLogger : DIRSBasicModule
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addLog:;
- (void)_flushTemporaryLogs;
- (id)_stringValueOfLevel:;
- (void)addLogger:;
- (void)removeAllLoggers;
- (void)removeLogger:;
- (id)stringUsingDefaultFormatter:;
- (void)commonInit;
- (void)stop;
- (void)run;
- (void).cxx_destruct;
+ (id)moduleId;
+ (id)moduleVersion;
@end
