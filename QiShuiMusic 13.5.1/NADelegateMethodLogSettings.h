@interface NADelegateMethodLogSettings : NSObject
@property (nonatomic) @? argumentFormatter;
@property (nonatomic) @? logger;
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) C logType;
- (id)logger;
- (id)init;
- (id)log;
- (unsigned char)logType;
- (void)setLogger:;
- (void).cxx_destruct;
- (id)initWithLog:logType:argumentFormatter:;
- (id)formattedDescriptionForArgument:;
- (id)argumentFormatter;
@end
