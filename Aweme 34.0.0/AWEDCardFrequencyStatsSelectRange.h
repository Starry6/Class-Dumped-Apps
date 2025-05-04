@interface AWEDCardFrequencyStatsSelectRange : MTLModel
@property (nonatomic) NSString type;
@property (nonatomic) q range;
@property (nonatomic) q selectType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)selectType;
- (long long)range;
- (void)setRange:;
- (id)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
