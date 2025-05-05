@interface LiveStrategyManager : NSObject
@property (nonatomic) <LSPreconnInterface> preconnManager;
@property (nonatomic) BOOL inBackground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getBestIPForHost:callback:;
- (id)preconnManager;
- (void)preconnManager:resolvingDomain:callback:;
- (void)registerBackgroundStatus;
- (void)setNextRoomInfo:type:arg:;
- (void)setPreconnManager:;
- (void)unregisterBackgroundStatus;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)inBackground;
- (void)setInBackground:;
+ (id)executeCommand:command:hashCode:info:;
+ (void)setNextRoomInfo:type:arg:;
+ (id)sharedInstance;
@end
