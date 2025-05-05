@interface ASDExtensionMonitor : NSObject
@property (nonatomic) NSArray extensions;
@property (nonatomic) @? updateHandler;
- (id)extensions;
- (void)dealloc;
- (id)initWithAttributes:;
- (id)updateHandler;
- (void)setUpdateHandler:;
- (void).cxx_destruct;
@end
