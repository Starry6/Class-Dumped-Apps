@interface NQEManager : NSObject
@property (nonatomic) NSMapTable networkQualityObservers;
- (id)networkQualityObservers;
- (void)notifyNetworkQualityType:;
- (void)regNQEObserver:queue:;
- (void)setNetworkQualityObservers:;
- (void)unregNQEObserver:;
- (id)init;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
