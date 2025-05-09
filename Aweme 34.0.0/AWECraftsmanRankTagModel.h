@interface AWECraftsmanRankTagModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString cityCode;
@property (nonatomic) NSString cityName;
@property (nonatomic) NSString cityShortName;
@property (nonatomic) NSString career;
@property (nonatomic) NSString rankType;
@property (nonatomic) NSNumber rankIndex;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)rankIndex;
- (id)career;
- (void)setCareer:;
- (void)setRankIndex:;
- (id)cityShortName;
- (void)setCityShortName:;
- (id)schema;
- (void)setSchema:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (void)setRankType:;
- (id)rankType;
- (id)cityCode;
- (void)setCityCode:;
- (id)cityName;
- (void)setCityName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
