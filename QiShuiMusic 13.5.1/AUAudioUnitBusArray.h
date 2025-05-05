@interface AUAudioUnitBusArray : NSObject
@property (nonatomic) {vector<BusPropertyObserver observers;
@property (nonatomic) Q count;
@property (nonatomic) BOOL countChangeable;
@property (nonatomic) AUAudioUnit ownerAudioUnit;
@property (nonatomic) q busType;
- (id)init;
- (void)dealloc;
- (id)ownerAudioUnit;
- (long long)busType;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)objectAtIndexedSubscript:;
- (void)removeObserverFromAllBusses:forKeyPath:context:;
- (void)indexBusses;
- (void)replaceBusses:;
- (id)initWithAudioUnit:busType:busses:;
- (void).cxx_destruct;
- (BOOL)isCountChangeable;
- (id)initWithAudioUnit:busType:;
- (void)setObservers:;
- (void)addObserverToAllBusses:forKeyPath:options:context:;
- (BOOL)setBusCount:error:;
- (id)observers;
- (unsigned long long)count;
- (id).cxx_construct;
@end
