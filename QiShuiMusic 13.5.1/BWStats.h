@interface BWStats : NSObject
@property (nonatomic) double multiplier;
@property (nonatomic) NSString unitDesignator;
@property (nonatomic) q numberOfSamples;
@property (nonatomic) double min;
@property (nonatomic) double max;
@property (nonatomic) double average;
@property (nonatomic) double standardDeviation;
- (id)init;
- (void)dealloc;
- (void)addDataPoint:;
- (id)initWithStats:;
- (void)setMultiplier:;
- (id)unitDesignator;
- (double)min;
- (void)setUnitDesignator:;
- (id)debugDescription;
- (double)multiplier;
- (long long)numberOfSamples;
- (double)max;
- (void)removeDataPoint:;
- (id)description;
- (double)standardDeviation;
- (double)average;
- (id)copyWithZone:;
@end
