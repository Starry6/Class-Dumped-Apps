@interface PHMemoryPresentationHints : NSObject
@property (nonatomic) Q socialRelationships;
@property (nonatomic) q tripType;
@property (nonatomic) q qualityCategory;
@property (nonatomic) Q recommendedMoods;
@property (nonatomic) Q forbiddenMoods;
@property (nonatomic) NSDictionary musicGenreDistribution;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)musicGenreDistribution;
- (unsigned long long)socialRelationships;
- (long long)tripType;
- (long long)qualityCategory;
- (unsigned long long)recommendedMoods;
- (unsigned long long)forbiddenMoods;
- (id)initWithMemory:;
+ (unsigned long long)socialRelationshipsFromMemory:;
+ (long long)tripTypeFromMemory:;
@end
