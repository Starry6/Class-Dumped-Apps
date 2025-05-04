@interface AWETrackerHooker : NSObject
@property (nonatomic) BOOL allHook;
@property (nonatomic) NSArray events;
@property (nonatomic) @? hookerHandler;
- (BOOL)trackEvent:params:;
- (id)initWithEvents:eventHandler:;
- (void)setAllHook:;
- (void)setHookerHandler:;
- (BOOL)allHook;
- (id)hookerHandler;
- (void)setEvents:;
- (id)init;
- (id)events;
- (void).cxx_destruct;
- (id)initWithEventHandler:;
+ (id)initWithEvents:eventHandler:;
+ (id)allHookerWithEventHandler:;
@end
