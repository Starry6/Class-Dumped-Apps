@interface NWAccumulation : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSMutableDictionary durations;
@property (nonatomic) NSString currentState;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) BOOL isSnapshot;
- (BOOL)isSnapshot;
- (void)setCurrentState:;
- (void)updateWithState:atTime:;
- (double)lastUpdateTime;
- (void)dealloc;
- (void)setName:;
- (id)currentState;
- (id)initWithName:;
- (void)setDurations:;
- (id)durations;
- (void).cxx_destruct;
- (id)snapshot;
- (void)reset;
- (id)description;
- (id)name;
- (void)setIsSnapshot:;
- (void)setLastUpdateTime:;
@end
