@interface IESECLiveEventFactory : NSObject
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)businessPlugins;
- (void)setLiveContext:;
- (id)initWithLiveContext:;
- (id)liveContext;
- (void)loadAllPlugins;
- (void)p_dispatchEvent:;
- (void)p_realDispatchEvent:plugin:;
- (void)p_registerPlugin:;
- (void)dispatchEventWithName:;
- (void).cxx_destruct;
- (void)dispatchEvent:;
- (void)registerPlugin:;
- (void)unregisterPlugin:;
- (void)destroyAllPlugins;
@end
