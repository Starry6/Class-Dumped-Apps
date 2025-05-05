@interface AFDeviceRingerSwitchObserver : NSObject
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeListener:;
- (void)addListener:;
- (id)init;
- (long long)state;
- (void).cxx_destruct;
- (void)notifyObserver:didChangeStateFrom:to:;
- (void)_updateStateWithNotifyState:;
+ (id)sharedObserver;
@end
