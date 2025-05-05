@interface VKARWalkingFeatureSet : NSObject
@property (nonatomic) q state;
@property (nonatomic) Q uniqueIdentifier;
@property (nonatomic) NSArray features;
- (void)removeObserver:;
- (void)addObserver:;
- (id)initWithFeatures:;
- (unsigned long long)uniqueIdentifier;
- (void)setState:;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (id)features;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (void)_stateWillChangeFromState:nextState:;
@end
