@interface AWEInTodayTagWeightModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSString tag;
@property (nonatomic) double weight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setWeight:;
- (id)tag;
- (double)weight;
- (void)setTag:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
