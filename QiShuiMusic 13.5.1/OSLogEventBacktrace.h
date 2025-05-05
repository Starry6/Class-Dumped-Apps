@interface OSLogEventBacktrace : NSObject
@property (nonatomic) NSArray frames;
- (void)dealloc;
- (id)initWithSingleFrame:;
- (id)frames;
- (id)initWithBacktrace:;
- (id)initWithFrames:;
@end
