@interface AWELiveStrategyServiceImpl : NSObject
@property (nonatomic) <IESLiveStrategyService> strategyService;
@property (nonatomic) NSMutableDictionary observerList;
@property (nonatomic) NSLock observerListLock;
@property (nonatomic) NSMutableDictionary hasAddObserverDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)strategyService;
- (void)batchCollectInformation:;
- (id)getLatestFactor:;
- (id)characterValueForKey:;
- (void)setStrategyService:;
- (void)eventDispatcherWillDispatchValue:withFactorKey:;
- (void)setObserverListLock:;
- (void)setHasAddObserverDict:;
- (id)observerListLock;
- (id)hasAddObserverDict;
- (void)addStrategyObserver:InFactor:;
- (void)removeStrategyObserver:InFactor:;
- (void).cxx_destruct;
- (id)observerList;
- (void)setObserverList:;
+ (id)shareInstance;
@end
