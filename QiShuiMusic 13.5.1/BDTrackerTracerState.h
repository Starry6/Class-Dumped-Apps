@interface BDTrackerTracerState : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) Q count;
@property (nonatomic) q duration;
@property (nonatomic) NSString key;
@property (nonatomic) NSString haskey;
- (void)addDuration:;
- (id)haskey;
- (id)initWithName:key:;
- (void)setHaskey:;
- (void)setCount:;
- (void)setName:;
- (id)toDictionary;
- (id)key;
- (void)setDuration:;
- (void)setKey:;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)count;
- (long long)duration;
- (void)setMaxValue:;
- (void)addCount:;
- (void)fromDictionary:;
+ (id)hasKeyWithName:key:;
+ (id)fromDictionary:;
@end
