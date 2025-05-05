@interface IESIMPOIAwemeTagRateModel : MTLModel
@property (nonatomic) q extendTime;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString smallDesc;
@property (nonatomic) NSArray rateGrades;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)extendTime;
- (id)rateGrades;
- (void)setExtendTime:;
- (void)setRateGrades:;
- (void)setSmallDesc:;
- (id)smallDesc;
- (id)desc;
- (void)setDesc:;
- (void).cxx_destruct;
+ (id)rateGradesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
