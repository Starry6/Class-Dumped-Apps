@interface CULogHandle : NSObject
@property (nonatomic) NSString label;
- (void)dealloc;
- (void)ulogv:format:args:;
- (void)setLabel:;
- (id)label;
- (id)initWithSubsystem:category:logLevel:;
- (id)initWithSubsystem:category:logFlags:;
- (void)ulog:message:;
- (void).cxx_destruct;
- (id)initWithSubsystem:category:logLevel:logFlags:;
- (void)ulogf:format:;
- (id)initWithSubsystem:category:;
@end
