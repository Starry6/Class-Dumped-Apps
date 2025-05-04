@interface AWEPzBusinessObserverManager : NSObject
@property (nonatomic) NSMutableArray observerArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)observerArray;
- (void)setObserverArray:;
- (id)setupConfigs;
- (void)instantAllObserverWithConfigs:;
- (void)registerObserverWithConfig:toArray:;
- (void)domainConfigDidChange:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
