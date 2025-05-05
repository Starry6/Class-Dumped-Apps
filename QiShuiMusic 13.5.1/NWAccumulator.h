@interface NWAccumulator : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableArray accumulatedValues;
@property (nonatomic) NSArray accumulations;
@property (nonatomic) NWAccumulator lastSnapshot;
- (id)awdAccumulator;
- (void)dealloc;
- (void)setName:;
- (void)registerObserverForKeyPath:ofObject:alreadyRegistered:;
- (void)setAccumulatedValues:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithName:;
- (id)accumulatedValueForObject:andKeyPath:;
- (id)accumulations;
- (void).cxx_destruct;
- (id)snapshot;
- (void)addAccumulation:forKey:stateCallback:;
- (void)reset;
- (id)description;
- (id)lastSnapshot;
- (id)name;
- (id)accumulatedValues;
- (id)dictionaryRepresentation;
- (void)addAccumulation:withName:forKey:stateCallback:;
- (void)setLastSnapshot:;
@end
