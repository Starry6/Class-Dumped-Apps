@interface AWETrackerAspect : NSObject
@property (nonatomic) BOOL shouldBeIgnored;
@property (nonatomic) NSString event;
@property (nonatomic) @? block;
- (id)initWithEvent:block:;
- (void)setShouldBeIgnored:;
- (BOOL)shouldBeIgnored;
- (void)setEvent:;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (id)event;
+ (id)aspectForEvent:block:;
+ (id)zeroAspect;
@end
