@interface MPLoggingContext : NSObject
@property (nonatomic) NSInteger logType;
@property (nonatomic) DTFLogFormatter formatter;
@property (nonatomic) NSMutableDictionary logDict;
@property (nonatomic) NSString bizType;
- (id)logDict;
- (id)bizType;
- (void)setBizType:;
- (void)setLogDict:;
- (int)logType;
- (id)formatter;
- (void).cxx_destruct;
- (void)setLogType:;
- (void)setFormatter:;
@end
