@interface IESECLivePerfPlugin : NSObject
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (id)consumedEventsSet;
- (void)destroyPlugin;
- (BOOL)dispatchInBackgroundThread;
- (id)initPluginWithLiveContext:;
- (id)initWithLiveContext:;
- (id)liveContext;
- (void)receive:;
- (void)reportLivePerfWithContext:perfKey:value:;
- (void).cxx_destruct;
@end
