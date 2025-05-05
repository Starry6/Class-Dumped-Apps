@interface CalFileSensor : NSObject
@property (nonatomic) NSString path;
@property (nonatomic) BOOL started;
@property (nonatomic) @? eventBlock;
- (id)path;
- (id)init;
- (void)dealloc;
- (BOOL)started;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (id)description;
- (id)eventBlock;
- (id)initWithPath:eventBlock:;
@end
